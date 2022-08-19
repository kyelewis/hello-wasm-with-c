//https://esbuild.github.io/plugins/#webassembly-plugin
import { build } from "esbuild";
import { wasmPlugin } from "./esbuild-wasm-plugin";

(async () => {
  try {
    await build({
      entryPoints: ["src/ts/index.ts"],
      bundle: true,
      format: "esm",
      outfile: "dist/index.js",
      plugins: [wasmPlugin],
    });
  } catch (error) {
    process.exit(1);
  }
})();
