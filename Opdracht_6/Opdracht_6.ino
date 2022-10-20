#include <Servo.h>
  
  int positie = 0;
  int vector = 0;
  Servo ser;

void setup() {
  
  //servo attachen
  ser.attach(3);
  
}

void loop() {
  
  //statements voor het draaien 
  
  //Beide knoppen
  if(digitalRead(2) && digitalRead(1)) {
    delay(10);
    
    if(positie == 120 && vector < 1) vector = 240;
    ser.write(servoPos());
    
  } else 
    
    //Eerste knop
   if (digitalRead(1) && !digitalRead(2)) {
    delay(10);
    ser.write(servoPos());
    
    if(positie == 120 && vector != 1) vector = 1;
    
  } else 
    
    //Tweede knop 
    if(digitalRead(2) && !digitalRead(1)) {
     delay(10);
     ser.write(servoPos());
    
     if(positie == 120 && vector != 1) vector = 1;
  }
}

//functie voor het draaien van servo
int servoPos() {
  if(vector == 1) positie--;
  if(vector == 0) positie++;
  if(positie <= 0) vector = 0;
  if(vector > 1) vector--;
  
  return positie;
}
