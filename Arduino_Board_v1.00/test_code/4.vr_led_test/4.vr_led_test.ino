#include "EasyAPI.h"
int cnt=0;
int potPin = 21; 
int ledPins[] = {6,9,11,7,13}; 
int numLeds = 5; // LED 개수

void setup (){
    _start(1);
    Serial.begin(9600);
    for (int i = 0; i < numLeds; i++) {
        pinMode(ledPins[i], OUTPUT);  // LED 핀 출력 설정
    }
}

void loop() {
    int sensorValue = analogRead(potPin); // 가변저항 값 읽기 (0~1023)
    Serial.println(sensorValue);
    // 가변저항 값을 0~5 범위로 매핑
    int level = map(sensorValue, 1023, 0, 0, numLeds);

    // level에 따라 LED 켜기
    for (int i = 0; i < numLeds; i++) {
        if (i < level) {
            digitalWrite(ledPins[i], HIGH);
        } else {
            digitalWrite(ledPins[i], LOW);
        }
    }

    delay(100); // 너무 빠르게 깜빡이지 않게 약간의 지연
}


