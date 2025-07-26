/*************************************************
 * Public Constants
 * 120
 *************************************************/
#define  bpm_offset  2561//1550//올라갈수록 느려짐         
// 2557  125
// 2561  124
// 2562  120
// 2565  120
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

 
#define n32     1*3   	//3  32분음표 
#define n16     2*3   	//6
#define n16d    3*3  	//9
#define n16t    2*2 	//4
#define n8      4*3 	//12
#define n8d     6*3   	//18
#define n8t     4*2   	//8
#define n4      8*3	//24
#define n4d     12*3  	//36
#define n4t     8*2 	//16
#define n2      16*3 	//48
#define n2d     24*3 	//72
#define n2t     16*2  	//32
#define n1      32*3  	//96
//2옥타브
#define do2     NOTE_C2
#define xdo2    NOTE_CS2 
#define re2     NOTE_D2 
#define xre2    NOTE_DS2
#define mi2    NOTE_E2
#define pa2     NOTE_F2
#define xpa2    NOTE_FS2
#define sol2    NOTE_G2
#define xsol2   NOTE_GS2
#define ra2     NOTE_A2
#define xra2    NOTE_AS2
#define si2     NOTE_B2
#define ci2     NOTE_B2
//3옥타브
#define do3     NOTE_C3
#define xdo3    NOTE_CS3 
#define re3     NOTE_D3 
#define xre3    NOTE_DS3
#define mi3     NOTE_E3
#define pa3     NOTE_F3
#define xpa3    NOTE_FS3
#define sol3    NOTE_G3
#define xsol3   NOTE_GS3
#define ra3     NOTE_A3
#define xra3    NOTE_AS3
#define si3     NOTE_B3
#define ci3     NOTE_B3
//4옥타브
#define do4     NOTE_C4
#define xdo4    NOTE_CS4 
#define re4     NOTE_D4 
#define xre4    NOTE_DS4
#define mi4     NOTE_E4
#define pa4     NOTE_F4
#define xpa4    NOTE_FS4
#define sol4    NOTE_G4
#define xsol4   NOTE_GS4
#define ra4     NOTE_A4
#define xra4    NOTE_AS4
#define si4     NOTE_B4
#define ci4     NOTE_B4
//5옥타브
#define do5     (do4*2)
#define xdo5    (xdo4*2)
#define re5     (re4*2)
#define xre5    (xre4*2)
#define mi5     (mi4*2)
#define pa5     (pa4*2)
#define xpa5    (xpa4*2)
#define sol5    (sol4*2)
#define xsol5   (xsol4*2)
#define ra5     (ra4*2)
#define xra5    (xra4*2)
#define si5     (si4*2)
#define ci5     (ci4*2)
//6옥타브
#define do6     (do5*2)
#define xdo6    (xdo5*2)
#define re6     (re5*2)
#define xre6    (xre5*2)
#define mi6     (mi5*2)
#define pa6     (pa5*2)
#define xpa6    (xpa5*2)
#define sol6    (sol5*2)
#define xsol6   (xsol5*2)
#define ra6     (ra5*2)
#define xra6    (xra5*2)
#define si6     (si5*2)
#define ci6     (ci5*2)
//7옥타브
#define do7     (do6*2)
#define xdo7    (xdo6*2)
#define re7     (re6*2)
#define xre7    (xre6*2)
#define mi7     (mi6*2)
#define pa7     (pa6*2)
#define xpa7    (xpa6*2)
#define sol7    (sol6*2)
#define xsol7   (xsol6*2)
#define ra7     (ra6*2)
#define xra7    (xra6*2)
#define si7     (si6*2)
#define ci7     (ci6*2)
int notes__[] = {
    NOTE_B3, NOTE_C4,
    NOTE_CS4,NOTE_D4, 
    NOTE_DS4,NOTE_E4, 
    NOTE_E4, NOTE_F4, 
    NOTE_FS4,NOTE_G4, 
    NOTE_GS4,NOTE_A4, 
    NOTE_AS4,NOTE_B4,
	
    NOTE_B4, NOTE_C5, 
    NOTE_CS5,NOTE_D5, 
    NOTE_DS5,NOTE_E5, 
    NOTE_E5, NOTE_F5, 
    NOTE_FS5,NOTE_G5, 
    NOTE_GS5,NOTE_A5,
    NOTE_AS5,NOTE_B5, 
    NOTE_B5, NOTE_C6,
    NOTE_CS6,NOTE_D6, 
    NOTE_DS6,NOTE_E6, 
    NOTE_E6, NOTE_F6, 
    NOTE_FS6,NOTE_G6, 
    NOTE_GS6,NOTE_A6,
    NOTE_AS6,NOTE_B6, 
    NOTE_B6, NOTE_C7,
    NOTE_CS7,NOTE_D7, 
    NOTE_DS7,NOTE_E7, 
    NOTE_E7, NOTE_F7, 
    NOTE_FS7,NOTE_G7, 
    NOTE_GS7,NOTE_A7,
    NOTE_AS7,NOTE_B7, 
    NOTE_B7, NOTE_C8,
    NOTE_CS8,NOTE_D8, 
};
void s1(byte pin, int duration, byte count);
void s2(byte pin, int duration, byte count);
void s3(byte pin, int duration, byte count);
void s4(byte pin, int duration, byte count);
void s5(byte pin, int duration, byte count);
void s6(byte pin, int duration, byte count);
void s7(byte pin, int duration, byte count);
void _s8(byte pin, int duration, byte count);
void s9(byte pin, int duration, byte count);
void s10(byte pin, int duration, byte count);
void s11(byte pin, int duration, byte count);
void s12(byte pin, int duration, byte count);
void s13(byte pin, int duration, byte count);

void soundbox(byte pin, unsigned char key, int duration, byte count);
void soundbox(byte pin, unsigned char key, int duration);
void soundbox(byte pin, unsigned char key, int duration){
	soundbox(pin,key,duration,1);
}
	
void soundbox(byte pin, unsigned char key, int duration, byte count){
	
	pinMode(pin,OUTPUT);
	switch(key){
		case 1: s1(pin,duration,count); break;
		case 2: s2(pin,duration,count); break;
		case 3: s3(pin,duration,count); break;
		case 4: s4(pin,duration,count); break;
		case 5: s5(pin,duration,count); break;
		case 6: s6(pin,duration,count); break;
		case 7: s7(pin,duration,count); break;
		case 8: _s8(pin,duration,count); break;
		case 9: s9(pin,duration,count); break;
		case 10: s10(pin,duration,count); break;
		case 11: s11(pin,duration,count); break;
		case 12: s12(pin,duration,count); break;
		default :
			s12(pin,duration,count); break;
	}
	//pinMode(pin,INPUT_PULLUP);
}

void s1(byte pin, int duration, byte count){ //앰블런스
    for(int veces=0; veces<count; veces++){
        int i,x,mm;
		mm = map(duration,0,1023,300,950);
		for (i=mm; i>220; i=(i-5)){ //850
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
		mm = map(duration,0,1023,500,950);
		for (i=220; i<mm; i=(i+4)){ //850
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
    }
}
 
void s2(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++){
        int i,x,mm;
		mm = map(duration,0,1023,500,1100);
		for (i=350; i<mm; i=(i+2)){ //800
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
    }
}
 
void s3(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++){
        int i,x,mm;
		mm = map(duration,0,1023,100,480);
		for (i=0; i<mm; i++){ //380
			for  ( x=0; x<2;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(450);
				digitalWrite(pin,LOW);
				delayMicroseconds(450);
			} 
		}
        mm = map(duration,0,1023,100,480);
		for (i=0; i<(mm-100); i++){  //280
			for  ( x=0; x<2;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(600);
				digitalWrite(pin,LOW);
				delayMicroseconds(600);
			} 
		}
    }
}
 
void s4(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++){
        int i,x,mm;
		mm = map(duration,0,1023,500,1100);
		for (i=mm; i>350; i--){ //1000
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
        mm = map(duration,0,1023,500,1100);
		for (i=350; i<mm; i++){			
			for  ( x=0; x<2;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
    }
}
 
void s5(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++)
    {
        int i,x,mm;
		mm = map(duration,0,1023,30,120);
		
		for (i=0; i<20; i++){//20
			for  ( x=0; x<mm;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(260+0);
				digitalWrite(pin,LOW);
				delayMicroseconds(280+0);
			}
		}
		mm = map(duration,0,1023,0,100);
		for (i=0; i<4; i++){//4
			for  ( x=0; x<mm;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(420+0);
				digitalWrite(pin,LOW);
				delayMicroseconds(420+0);
			}
		}
    }
}
 
 
void s6(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++)
    {
        int i,x,mm;
		mm = map(duration,0,1023,600,1000);
		for (i=350; i<mm; i=(i+2)){ //800
			for  ( x=0; x<2;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
    }
}
 
void s7(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++)
    {
        int i,x,mm;
		mm = map(duration,0,1023,250,800);
		for (i=mm; i>100; i=(i-2)){//400
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
    }
}

 
void _s8(byte pin, int duration, byte count){
    for(int veces=0; veces<count; veces++)
    {
        int i,x,mm;
		mm = map(duration,0,1023,800,1200);
		for (i=mm; i>480; i=(i-2)){//1000
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite(pin,LOW);
				delayMicroseconds(i);
			} 
		}
        mm = map(duration,0,1023,100,300);
		for (i=0; i<mm; i++){//200
			for  ( x=0; x<1;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(480);
				digitalWrite(pin,LOW);
				delayMicroseconds(480);
			}
		}
    }
}

void s9(byte pin, int duration, byte count){ //하이칩
    for(int veces=0; veces<count; veces++){
		int i,x,mm,chirp_delay;
		int inten_rand;
		inten_rand = int(random(2,8));
		chirp_delay = random(6, 20)*4;		
	    //for(int veces=0; veces<=chirpsNumber; veces++){
		mm = map(duration,0,1023,150,350);
		for (i=20; i<mm; i=(i+1)){//200
			for  (x=0; x<inten_rand;  x++){
				digitalWrite (pin,HIGH);
				delayMicroseconds(i);
				digitalWrite (pin,LOW);
				delayMicroseconds(i);
			}
		}
		delay(chirp_delay);
	}
}
void s10(byte pin, int duration, byte count){//로우칩
    for(int veces=0; veces<count; veces++){
		int i,x,mm,chirp_delay;
		//for(int veces=0; veces<=chirpsNumber; veces++){
        chirp_delay = random(6, 20)*4;		
		mm = map(duration,0,1023,100,300);
        for (i=0; i<mm; i++){
            digitalWrite (pin,HIGH);
            delayMicroseconds(i);
            digitalWrite(pin,LOW);
            delayMicroseconds(i);
        } 
        for (i=90; i>20; i--){
            for  ( x=0; x>5;  x++){
                digitalWrite (pin,HIGH);
                delayMicroseconds (i);
                digitalWrite (pin,LOW);
                delayMicroseconds (i);
            }
        }
        delay(chirp_delay);	
	}
}

void s11(byte pin, int duration, byte count){//트윗
    for(int veces=0; veces<count; veces++){
		int i,x,mm,chirp_delay,inten_rand;
		mm = map(duration,0,1023,80,200);
		inten_rand = random(4,6);
        for (int i=mm; i>0; i--){ //100
            for(int x=0; x<inten_rand;  x++){
                digitalWrite (pin,HIGH);
                delayMicroseconds (i);
                digitalWrite (pin,LOW);
                delayMicroseconds (i);
            }
        }
	}
}
void s12(byte pin, int duration, byte count){//랜덤 
	for(int veces=0; veces<count; veces++){
		int dt = duration/5+50;
		int noteDuration = 1000 / 8;
		int pauseBetweenNotes = dt * 1.030;      
		int note_rand = int(random(0,20));
		tone(pin, notes__[note_rand+1]);
		//tone(pin, notes[note_rand+1], pauseBetweenNotes);
		//tone(pin, notes[note_rand+1], noteDuration);        
		delay(pauseBetweenNotes);
	}
}