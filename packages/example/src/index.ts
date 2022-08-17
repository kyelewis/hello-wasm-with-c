import { WASMTerminal } from "@kyedoesdev/wasm-terminal";

(async () => {
  const terminal = new WASMTerminal();
  await terminal.init();
  terminal.setText("abc wasm!!");
  terminal.renderToCanvas("#renderCanvas");
})();
