import wasm from "./wasm";

export class WASMTerminal {
  private wasmExports;

  public async init() {
    this.wasmExports = await wasm();
  }

  public setText(text: string) {
    if (!this.wasmExports) throw new Error("Must call init first");

    const inputPtr = this.wasmExports.getInputPtr();
    const encodedText = new TextEncoder().encode(`${text}\0`);

    const view = new Uint8Array(this.wasmExports.memory.buffer, inputPtr, 16);

    view.set(encodedText);
  }

  public renderToCanvas(canvasElementSelector) {
    if (!this.wasmExports) throw new Error("Must call init first");

    const canvasContext = document
      .querySelector(canvasElementSelector)
      .getContext("2d");

    // Request a render of the image
    const ptr = this.wasmExports.render();
    const width = this.wasmExports.getImageWidth();
    const height = this.wasmExports.getImageHeight();

    const view = new Uint8ClampedArray(
      this.wasmExports.memory.buffer,
      ptr,
      width * height * 4
    );

    // Create ImageData from the buffer
    const image = new ImageData(view, width, height);
    canvasContext.canvas.width = width;
    canvasContext.canvas.height = height;
    canvasContext.putImageData(image, 0, 0);
  }
}
