#include <Servo.h>


 int echoPin = 3;
 int trigPin = 4;
Servo ser;
 int serPin = 1;


float afstand;
float tijd;


void setup()
{
//pinmode instellen en servo attachen
  pinMode(echoPin, INPUT);
  ser.attach(serPin);
  pinMode(trigPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  
  delay(2);

  digitalWrite(trigPin, HIGH);
  
  delay(10);
  
  digitalWrite(trigPin, LOW);
  
  //Pulslengte ontvangen 
  tijd = pulseIn(echoPin, HIGH);
  
  //Puls omrekenen naar afstand
  afstand = tijd/58;

  
  
  
  //if-statements voor het draaien van de servo
  if (afstand <= 10) {
    
    //afstand kleiner dan 4 CM
    if (afstand <= 4) {
      ser.write(0);
      }
    
    //Alle hoeken hier tussen.
        int graden = map((afstand - 4) * 10, 0, 60, 0, 180);
        ser.write(graden);
    
    
  //Rust stand
    } else ser.write(180);

    delay(200);
}
