#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

#define BUTTON1 7
#define BUTTON2 8
#define BUTTON3 9
#define BUTTON4 11

extern int state1;
extern int state2;
extern int state3;
extern int state4;

extern int val1;
extern int val2;
extern int val3;
extern int val4;

void checkButton();

#endif
