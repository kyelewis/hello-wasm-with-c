const importObject = {
  env: {
     getLevel() {
       return document.getElementById('level-input').value;
     }
  }
};

(async() => {

  document.getElementById('level-input').addEventListener("change", (event) => {
    event.target.setAttribute('data-level', event.target.value)
  });

  // Load the WASM  
  const { instance } = await WebAssembly.instantiateStreaming(fetch('./hello.wasm'), importObject);

  // Render now
  render(instance);

  // Render every 2s after that
  setInterval(render(instance), 2000);

})();

const render = (instance) => () => {

  // WASM exports are at instance.exports.X
  const address = instance.exports.render();

  const buffer = new Uint8Array(
    instance.exports.memory.buffer,
    address,
    1024
  );

  const renderedText = decodeUntilNull(buffer);
  const el = document.getElementById('result-text');
  el.classList.remove('visible');
  setTimeout(() => {
    el.innerText = renderedText;
    el.classList.add('visible')
  }, 500);

};


const decodeUntilNull = (input: string) => {

  const chars = new TextDecoder().decode(input);
  let result = '';
  for(const char of chars) {
    if(char === '\0') return result;
    result += char;
  }

};

