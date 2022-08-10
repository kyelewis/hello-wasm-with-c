const importObject = {
  env: {}
};

(async() => {

  const { instance } = await WebAssembly.instantiateStreaming(fetch('./hello.wasm'), importObject);

  const canvasContext = document.getElementById('render').getContext('2d');

  render(instance, canvasContext)();

})();

const render = (wasmInstance, canvasContext) => () => {

  const opacity = 255;

  {
    const inputPtr = wasmInstance.exports.getInputPtr();
    const text = document.getElementById('input').value.toLowerCase();

    // Encode the text and add a null terminator
    const textEncoded = new TextEncoder().encode(text + "\0");

    // Create and update view
    const view = new Uint8Array(
      wasmInstance.exports.memory.buffer, 
      inputPtr, 
      16);

    view.set(textEncoded);

  }

  // Request a render of the image
  const ptr = wasmInstance.exports.render(opacity);
  const width = wasmInstance.exports.getImageWidth();
  const height = wasmInstance.exports.getImageHeight();

  const view = new Uint8ClampedArray(
    wasmInstance.exports.memory.buffer,
    ptr,
    width * height * 4
  );

  // Create ImageData from the buffer
  const image = new ImageData(view, width, height);
  canvasContext.canvas.width = width;
  canvasContext.canvas.height = height;
  canvasContext.putImageData(image, 0, 0);

  window.requestAnimationFrame(render(wasmInstance, canvasContext));

};

