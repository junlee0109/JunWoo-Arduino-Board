#include "EasyAPI.h"
int cnt=0;
void setup (){
    _start(1);
    Serial.begin(9600);
}

void loop() {
    Serial.println(cnt++);
    delay(500);
}
