//https://esbuild.github.io/plugins/#webassembly-plugin
export const wasmPlugin = {
  name: "wasm",
  setup(build) {
    let path = require("path");
    let fs = require("fs");

    build.onResolve({ filter: /\.wasm$/ }, (args) => {
      if (args.namespace === "wasm-stub") {
        return {
          path: args.path,
          namespace: "wasm-binary",
        };
      }

      if (args.resolveDir === "") {
        return; // Ignore unresolvable paths
      }
      return {
        path: path.isAbsolute(args.path)
          ? args.path
          : path.join(args.resolveDir, args.path),
        namespace: "wasm-stub",
      };
    });

    build.onLoad({ filter: /.*/, namespace: "wasm-stub" }, async (args) => ({
      contents: `import wasm from ${JSON.stringify(args.path)}
        export default (imports) =>
          WebAssembly.instantiate(wasm, imports).then(
            result => result.instance.exports)`,
    }));

    build.onLoad({ filter: /.*/, namespace: "wasm-binary" }, async (args) => ({
      contents: await fs.promises.readFile(args.path),
      loader: "binary",
    }));
  },
};
