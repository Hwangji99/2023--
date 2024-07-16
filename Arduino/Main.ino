#include "Button.h"
#include "Pattern.h"

void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT); // 진동모터 3개
    pinMode(6, OUTPUT);

    pinMode(BUTTON1, INPUT_PULLUP); // 버튼 4개
    pinMode(BUTTON2, INPUT_PULLUP
