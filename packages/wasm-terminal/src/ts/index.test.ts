import { vi, assert, expect, test } from "vitest";
import { WASMTerminal } from "./";

vi.mock("./wasm");

test("WASMTerminal", () => {
  const terminal = new WASMTerminal();
  expect(() => terminal.setText("abc")).toThrowError();
});
