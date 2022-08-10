#include "font.h"

// clang-format off

uint8 const character_a[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},    
    {0, 0, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 1, 0}, 
    {0, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_b[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},    
    {0, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 1, 0}, 
    {0, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_c[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},    
    {0, 0, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0}, 
    {0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_i[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},    
    {0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 0, 0, 0}, 
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_m[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},     
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 1, 1, 0}, 
    {0, 1, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 0, 1, 0},  
    {0, 1, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_n[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},     
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 0, 0, 1, 0}, 
    {0, 1, 0, 1, 0, 1, 0},
    {0, 1, 0, 0, 1, 1, 0},  
    {0, 1, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_s[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},    
    {0, 0, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0}, 
    {0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 0}, 
    {0, 1, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_w[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},         
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 1, 0},     
    {0, 1, 0, 1, 0, 1, 0},
    {0, 1, 1, 0, 1, 1, 0}, 
    {0, 1, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_exclaim[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},         
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0},     
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_space[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},         
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},     
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}};

uint8 const character_unknown[CHARACTER_HEIGHT][CHARACTER_WIDTH] = {
    {0, 0, 0, 0, 0, 0, 0},         
    {0, 1, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 0, 0},     
    {0, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}, 
    {0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}};

// clang-format on

uint8 getASCIICharacterPixel(char code, int x, int y) {
  if(code == 'a') return character_a[y][x];  
  if(code == 'b') return character_b[y][x];  
  if(code == 'c') return character_c[y][x];  
  if(code == 'i') return character_i[y][x];  
  if(code == 'm') return character_m[y][x];
  if(code == 'n') return character_n[y][x];
  if(code == 's') return character_s[y][x];  
  if(code == 'w') return character_w[y][x];  
  if(code == '!') return character_exclaim[y][x];  
  if(code == ' ') return character_space[y][x];  
  return character_unknown[y][x];
}

