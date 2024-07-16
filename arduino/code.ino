#include <SoftwareSerial.h>
SoftwareSerial mySerial(A0, A1); // RX, TX
#define BUTTON1 7
#define BUTTON2 8
#define BUTTON3 9
#define BUTTON4 11
int state1 = 0;
int state2 = 0;
int state3 = 0;
int state4 = 0;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;

void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT); // 진동모터 3개
    pinMode(6, OUTPUT);

    pinMode(BUTTON1, INPUT_PULLUP); // 버튼 4개
    pinMode(BUTTON2, INPUT_PULLUP);
    pinMode(BUTTON3, INPUT_PULLUP);
    pinMode(BUTTON4, INPUT_PULLUP);
}

void loop() {
    if (mySerial.available() > 0) {
        int i_data = mySerial.read();
        Serial.println(i_data);
        if (i_data == '1') {
            state1 = 1;
            state2 = 0;
            state3 = 0;
            state4 = 0;
        } else if (i_data == '2') {
            state1 = 0;
            state2 = 1;
            state3 = 0;
            state4 = 0;
        } else if (i_data == '3') {
            state1 = 0;
            state2 = 0;
            state3 = 1;
            state4 = 0;
        } else if (i_data == '4') {
            state1 = 0;
            state2 = 0;
            state3 = 0;
            state4 = 1;
        }
    }

    if (state == 1) {   // 1번 패턴
        analogWrite(3, 100);
        delay(500);
        analogWrite(3, 0);
        delay(500);
        analogWrite(5, 100);
        delay(500);
        btn_ch();
        analogWrite(5, 0);
        delay(500);
        analogWrite(6, 100);
        btn_ch();
        delay(500);
        analogWrite(6, 0);
        delay(500);
    } else if (state2 == 1) {   // 2번 패턴
        analogWrite(6, 100);
        btn_ch();
        delay(500);
        btn_ch();
        analogWrite(6, 0);
        delay(500);
        analogWrite(5, 100);
        delay(500);
        btn_ch();
        analogWrite(5, 0);
        delay(500);
        analogWrite(3, 100);
        btn_ch();
        delay(500);
        analogWrite(3, 0);
        delay(500);
    } else if (state3 == 1) {   // 3번 패턴
        analogWrite(3, 100);
        analogWrite(5, 100);
        btn_ch();
        delay(1000);
        btn_ch();
        delay(1000);
        btn_ch();
        delay(1000);
        btn_ch();
        analogWrite(3, 0);
        btn_ch();
        analogWrite(5, 0);
        delay(500);
        btn_ch();
        analogWrite(5, 100);
        analogWrite(6, 100);
        btn_ch();
        delay(3000);
        btn_ch();
        analogWrite(5, 0);
        analogWrite(6, 100);
        btn_ch();
        delay(500);
        analogWrite(3, 100);
        btn_ch();
        analogWrite(6, 100);
        btn_ch();
        delay(3000);
        analogWrite(5, 0);
        btn_ch();
        analogWrite(5, 0);
        btn_ch();
        delay(500);
    } else if (state4 == 1) {
        // off 버튼
        analogWrite(3, 0);
        analogWrite(5, 0);
        analogWrite(6, 0);
        // Serial.println("4");
    }
}

void btn_ch() {
    val1 = digitalRead(BUTTON1);
    val2 = digitalRead(BUTTON2);
    val3 = digitalRead(BUTTON3);
    val4 = digitalRead(BUTTON4);

    if (val == LOW) {
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