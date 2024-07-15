#include "Button.h"

int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;

void checkButton() {
    val1 = digitalRead(BUTTON1);
    val2 = digitalRead(BUTTON2);
    val3 = digitalRead(BUTTON3);
    val4 = digitalRead(BUTTON4);

    if (val1 == LOW) {
        Serial.println("1");
        state1 = 1;
        state2 = 0;
        state3 = 0;
        state4 = 0;
    } else if (val2 == LOW) {
        Serial.println("2");
        state1 = 0;
        state2 = 1;
        state3 = 0;
        state4 = 0;
    } else if (val3 == LOW) {
        Serial.println("3");
        state1 = 0;
        state2 = 0;
        state3 = 1;
        state4 = 0;
    } else if (val4 == LOW) {
        Serial.println("4");
        state1 = 0;
        state2 = 0;
        state3 = 0;
        state4 = 1;
    }
}
