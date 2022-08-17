clang-11 --target=wasm32 \
  -O3 \
  -std=c11 \
  --no-standard-libraries \
  -Wl,--export=render \
  -Wl,--export=getImageWidth \
  -Wl,--export=getImageHeight \
  -Wl,--export=getInputPtr \
  -Wl,--no-entry -Wl,--allow-undefined \
  -mbulk-memory \
  -o dist/hello.wasm \
  src/c/hello.c src/c/text.c src/c/font.c
