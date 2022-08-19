#include "hello.h"

#include "text.h"

uint8* image = &__heap_base + 16;
char* inputText = (char*)&__heap_base;

uint8* render() {
  clearCharacters(image);

  for (int i = 0; i < 16; i++) {
    if (inputText[i] == '\0') break;
    writeCharacter(image, inputText[i], i);
  }
  /*writeCharacter(image, 'w', 0, opacity);
  writeCharacter(image, 'a', 1, opacity);
  writeCharacter(image, 's', 2, opacity);
  writeCharacter(image, 'm', 3, opacity);
  writeCharacter(image, ' ', 4, opacity);
  writeCharacter(image, 'i', 5, opacity);
  writeCharacter(image, 'n', 6, opacity);
  writeCharacter(image, ' ', 7, opacity);
  writeCharacter(image, 'c', 8, opacity);
  writeCharacter(image, '!', 9, opacity); */

  return image;
}

int getImageWidth() { return COLUMNS * CHARACTER_WIDTH; }
int getImageHeight() { return CHARACTER_HEIGHT; }
char* getInputPtr() { return inputText; }
