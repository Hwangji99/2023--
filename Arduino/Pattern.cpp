#include "Pattern.h"

void executePattern(int state1, int state2, int state3, int state4) {
    if (state1 == 1) {   // 1번 패턴
        analogWrite(3, 100);
        delay(500);
        analogWrite(3, 0);
        delay(500);
        analogWrite(5, 100);
        delay(500);
        checkButton();
        analogWrite(5, 0);
        delay(500);
        analogWrite(6, 100);
        checkButton();
        delay(500);
        analogWrite(6, 0);
        delay(500);
    } else if (state2 == 1) {   // 2번 패턴
        analogWrite(6, 100);
        checkButton();
        delay(500);
        checkButton();
        analogWrite(6, 0);
        delay(500);
        analogWrite(5, 100);
        delay(500);
        checkButton();
        analogWrite(5, 0);
        delay(500);
        analogWrite(3, 100);
        checkButton();
        delay(500);
        analogWrite(3, 0);
        delay(500);
    } else if (state3 == 1) {   // 3번 패턴
        analogWrite(3, 100);
        analogWrite(5, 100);
        checkButton();
        delay(1000);
        checkButton();
        delay(1000);
        checkButton();
        delay(1000);
        checkButton();
        analogWrite(3, 0);
        checkButton();
        analogWrite(5, 0);
        delay(500);
        checkButton();
        analogWrite(5, 100);
        analogWrite(6, 100);
        checkButton();
        delay(3000);
        checkButton();
        analogWrite(5, 0);
        analogWrite(6, 100);
        checkButton();
        delay(500);
        analogWrite(3, 100);
        checkButton();
        analogWrite(6, 100);
        checkButton();
        delay(3000);
        analogWrite(5, 0);
        checkButton();
        analogWrite(5, 0);
        checkButton();
        delay(500);
    } else if (state4 == 1) {
        // off 버튼
        analogWrite(3, 0);
        analogWrite(5, 0);
        analogWrite(6, 0);
        // Serial.println("4");
    }
}
