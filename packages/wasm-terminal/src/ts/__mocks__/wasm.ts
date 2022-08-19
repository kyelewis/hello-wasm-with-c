import { readFileSync } from "fs";
import { join } from "path";

const wasmBuffer = readFileSync(join(__dirname, "../../../dist/hello.wasm"));

const wasm = async () => {
  const { instance } = await WebAssembly.instantiate(wasmBuffer);
  return instance.exports;
};

export default wasm;
