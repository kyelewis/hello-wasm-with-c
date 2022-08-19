#include "text.h"

#include "font.h"

/** Write the character character to position in the buffer */
void writeCharacter(uint8* buffer, char character, int position) {
  uint8* ptr = buffer + (position * CHARACTER_WIDTH * RGBA);

  for (int y = 0; y < CHARACTER_HEIGHT; y++) {
    for (int x = 0; x < CHARACTER_WIDTH; x++) {
      // Get the pixel
      uint8 pixel = getASCIICharacterPixel(character, x, y);

      // Write the pixel
      ptr[0] = pixel == 0 ? 0 : 255;  // Red
      ptr[1] = pixel == 0 ? 0 : 255;  // Green
      ptr[2] = pixel == 0 ? 0 : 255;  // Blue
      ptr[3] = pixel == 0 ? 0 : 255;  // Alpha
      ptr += RGBA;
    }

    ptr += (COLUMNS - 1) * CHARACTER_WIDTH * RGBA;
  }
}

/** Clear all characters from the buffer */
void clearCharacters(uint8* buffer) {
  for (int i = 0; i < COLUMNS; i++) {
    writeCharacter(buffer, ' ', i);
  }
}
