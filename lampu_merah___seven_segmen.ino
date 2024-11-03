#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 3
#define DIO 4

// The amount of time (in milliseconds) Between tests
unsigned int angka = 0;
TM1637Display display(CLK, DIO);
int ledmerah = 5;
int ledkuning = 6;
int ledhijau = 7;


void setup() {
  display.setBrightness(0x0f);  //maximum brightness
  pinMode(ledmerah,OUTPUT);
  pinMode(ledkuning,OUTPUT);
  pinMode(ledhijau,OUTPUT);


}

void loop() {
  for (angka = 20;angka>5; angka--){
    display.showNumberDec(angka);
    if(angka<=6){
      digitalWrite(ledmerah,LOW);
    }else {
      digitalWrite(ledmerah,HIGH);
      delay (1000);
    }
  }
  for (angka = 4;angka>0; angka--){
    display.showNumberDec(angka);
    if(angka<=1){
      digitalWrite(ledkuning,LOW);
    }else {
      digitalWrite(ledkuning,HIGH);
      delay (1000); 
    }
   }
  for (angka = 10;angka>4; angka--){
    display.showNumberDec(angka);
    if(angka<=5){
      digitalWrite(ledhijau,LOW);
    }else {
      digitalWrite(ledhijau,HIGH);
      delay (1000); 
    }
  }
  for (angka = 4;angka>0; angka--){
    display.showNumberDec(angka);
    if(angka<=1){
      digitalWrite(ledkuning,LOW);
    }else {
      digitalWrite(ledkuning,HIGH);
      delay (1000); 
    }

  }
}
