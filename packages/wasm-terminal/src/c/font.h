#ifndef FONT_H
#define FONT_H

typedef unsigned char uint8;

#define CHARACTER_WIDTH 7
#define CHARACTER_HEIGHT 7

extern uint8 const character_a[CHARACTER_HEIGHT][CHARACTER_WIDTH];
extern uint8 const character_b[CHARACTER_HEIGHT][CHARACTER_WIDTH];
extern uint8 const character_c[CHARACTER_HEIGHT][CHARACTER_WIDTH];
extern uint8 const character_m[CHARACTER_HEIGHT][CHARACTER_WIDTH];
extern uint8 const character_s[CHARACTER_HEIGHT][CHARACTER_WIDTH];
extern uint8 const character_w[CHARACTER_HEIGHT][CHARACTER_WIDTH];
extern uint8 const character_unknown[CHARACTER_HEIGHT][CHARACTER_WIDTH];

uint8 getASCIICharacterPixel(char code, int x, int y);

#endif /** ifndef FONT_H */
