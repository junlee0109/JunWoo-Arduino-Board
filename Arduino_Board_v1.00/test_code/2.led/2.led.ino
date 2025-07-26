#include "EasyAPI.h"
int cnt=0;
int led[]={6,9,11,7,13};
void setup (){
    _start(1);
    Serial.begin(9600);
    for(int i=0;i<5;i++){
        pinMode(led[i], OUTPUT);
    }
}

void loop() {
    for(int i=0;i<5;i++)  {
        digitalWrite(led[i], HIGH);
        delay(100);
    }
    for(int i=0;i<5;i++)  {
        digitalWrite(led[i], LOW);
        delay(100);
    }
    Serial.println(cnt++);
    delay(500);
}
