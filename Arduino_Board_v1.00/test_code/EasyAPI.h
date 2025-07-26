#include <Cake_sounds.h>	
#include <Cake_sound_Func.h>
unsigned long STtime = millis();
unsigned int bpm = 130;

#define pinBUZZER 8
#define pinSTART 10
#define START_KEY (pinMode(pinSTART,INPUT_PULLUP), delay(1),(digitalRead(10)==0))
#include <pitches.h>
void play(unsigned int sound, unsigned int note); //박자수만큼 음을 연주
void buzzer(unsigned int mel,unsigned char count, unsigned int ontime, unsigned int offtime);//부져음 횟수와 온타임오프타임지정
void melody(unsigned int data);
void boot_melody(int count);    			// 부팅멜로디 함수 
void start_melody(unsigned int note);   	// 도레미파솔라시도 5옥타브 
void end_melody(unsigned int note);     	// 도시라솔파미레도 5옥타브
void level_up_melody(unsigned int note);	//도미솔도
void level_down_melody(unsigned int note);	//도솔미도

void timer(int offset);         // 타이머초기화
unsigned long timer_read(void); // 타이머경과시간 읽기


void _boot_melody(int count){
    for(int j =0;j <count;j ++){
        for(int i =1500;i < 2500;i =i +50){
            tone(pinBUZZER,i,20);delay(10);
        }
        
      }
     noTone(pinBUZZER);
}
void _start(int no){
    pinMode(pinBUZZER,OUTPUT);
    pinMode(pinSTART,INPUT_PULLUP);
    _boot_melody(1);
    while(!START_KEY){
        pinMode(pinSTART,OUTPUT);
        digitalWrite(pinSTART,LOW);delay(100);
        digitalWrite(pinSTART,HIGH);delay(50);

        if(no ==0) break;
    }
    _boot_melody(2);
}

void play(unsigned int sound, unsigned int note){
    if(!START_KEY) {
		note*=(bpm_offset/bpm);
		tone(pinBUZZER, sound, note);
		//tone(pinBUZZER, sound);
		delay(note*1.00);
	}
    noTone(pinBUZZER);
	pinMode(pinBUZZER,INPUT_PULLUP);
}
void play_(unsigned int sound, unsigned int note){
	if(sound==0) delay(note*1.00);
	else{
    if(!START_KEY) {
		note*=(bpm_offset/bpm);
		tone(pinBUZZER, sound);
		delay(note*1.00);
	}
    //noTone(pinBUZZER);
	//pinMode(pinBUZZER,INPUT_PULLUP);
	}
}
void buzzer(unsigned int mel,unsigned char count, unsigned int ontime, unsigned int offtime){
    for(int i=0;i<count;i++){
		if(START_KEY) break;
        tone(pinBUZZER, mel); delay(ontime);
        noTone(pinBUZZER);    delay(offtime);
    }
	pinMode(pinBUZZER,INPUT_PULLUP);    
}
void melody(unsigned int data){
    (data==0)? noTone(pinBUZZER) : tone(pinBUZZER, data);
    //if(data==1) melody((500+timer_read())*700); //헬리콥터
    
}

void start_melody(unsigned int note){
    int melody[]={NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6,0};
    note*=(bpm_offset/bpm);
	for (int thisNote = 0; thisNote < 9; thisNote++) {
		if(START_KEY) break;
        tone(pinBUZZER, melody[thisNote], note);
        delay(note);
        noTone(pinBUZZER);
    }
	pinMode(pinBUZZER,INPUT_PULLUP);
}
void end_melody(unsigned int note){
    int melody[]={NOTE_C6, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5,0};
    note*=(bpm_offset/bpm);
	for (int thisNote = 0; thisNote < 9; thisNote++) {
        if(START_KEY) break;
		tone(pinBUZZER, melody[thisNote], note);
        
		delay(note);
        noTone(pinBUZZER);
    }
	pinMode(pinBUZZER,INPUT_PULLUP);
}
void level_up_melody(unsigned int note){
    int melody[]={NOTE_C5, NOTE_E5, NOTE_G5, NOTE_C6, 0};
	note*=(bpm_offset/bpm);
    for (int thisNote = 0; thisNote < 5; thisNote++) {
        if(START_KEY) break;
		tone(pinBUZZER, melody[thisNote], note);
        delay(note);
        noTone(pinBUZZER);
    }
	pinMode(pinBUZZER,INPUT_PULLUP);
}
void level_down_melody(unsigned int note){
    int melody[]={NOTE_C6, NOTE_G5, NOTE_E5, NOTE_C5, 0};
	note*=(bpm_offset/bpm);
    for (int thisNote = 0; thisNote < 5; thisNote++) {
        if(START_KEY) break;
		tone(pinBUZZER, melody[thisNote], note);
        delay(note);
        noTone(pinBUZZER);
    }
	pinMode(pinBUZZER,INPUT_PULLUP);
}

void timer(int offset){
    STtime = millis()+offset;
}

unsigned long timer_read(void){
    return millis()-STtime;
}

