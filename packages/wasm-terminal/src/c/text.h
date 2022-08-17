#ifndef TEXT_H
#define TEXT_H

typedef unsigned char uint8;

#define RGBA 4

#define COLUMNS 10 
#define ROWS 1

#define CHARACTER_WIDTH 7
#define CHARACTER_HEIGHT 7

void writeCharacter(uint8* buffer, char character, int position);
void clearCharacters(uint8* buffer);

#endif /** ifndef TEXT_H */
