#include "EasyAPI.h"
int cnt=0;
int led[]={6,9,11,7,13};
int btn[]={2,3,4,5};
int mel[]={do5,re5,mi5,sol5};

void setup (){
    _start(1);
    Serial.begin(9600);
    for(int i=0;i<5;i++){
        pinMode(led[i], OUTPUT);
    }
    
    for(int i=0;i<4;i++){
        pinMode(btn[i], INPUT_PULLUP);
    }
}

void loop() {
    for(int i=0;i<4;i++)  {
        if(digitalRead(btn[i])== LOW) {
            digitalWrite(led[i], HIGH);
            Serial.println(cnt++);
            play(mel[i], n32);
        }else{
            digitalWrite(led[i], LOW);
        } 
    }
    delay(10);
}
