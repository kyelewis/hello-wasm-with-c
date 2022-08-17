#ifndef HELLO_H
#define HELLO_H

typedef unsigned char uint8;

extern uint8 __heap_base;
uint8* render();
int getImageWidth();
int getImageHeight();
char* getInputPtr();

#endif /** ifndef HELLO_H */
