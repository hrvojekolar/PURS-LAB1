#include <Arduino.h>

#define ZMIGAVAC_L 21
#define ZMIGAVAC_D 22
#define SVJETLA 18
#define SKLOPKA 33
bool stanjeSvjetla;
char slovo;
void setup() {
	Serial.begin(9600);
	pinMode(ZMIGAVAC_L, OUTPUT);
	pinMode(ZMIGAVAC_D, OUTPUT);
	pinMode(SVJETLA, OUTPUT);
	pinMode(SKLOPKA, INPUT);
	digitalWrite(ZMIGAVAC_L, LOW);
	digitalWrite(ZMIGAVAC_D, LOW);
	digitalWrite(SVJETLA, LOW);
	stanjeSvjetla = false;
}
void loop() {
	if(digitalRead(SKLOPKA) != stanjeSvjetla){
		stanjeSvjetla = digitalRead(SKLOPKA);
		digitalWrite(SVJETLA, stanjeSvjetla);
		Serial.println(stanjeSvjetla);
		Serial.println("Stanje svjetla se promijenilo");
	}
	if (Serial.available() > 0) {
		slovo = Serial.read();
		Serial.println(slovo);
		if(slovo == 'l'){
			for(int i=0; i<5; i++){
				digitalWrite(ZMIGAVAC_L, HIGH);
				delay(500);
				digitalWrite(ZMIGAVAC_L, LOW);
				delay(500);
			}
		}else if(slovo == 'd'){
			for(int i=0; i<5; i++){
				digitalWrite(ZMIGAVAC_D, HIGH);
				delay(500);
				digitalWrite(ZMIGAVAC_D, LOW);
				delay(500);
			}
		}
	}
}
