// BRON: https://www.youtube.com/watch?v=JghpLbCtnUU

//Pinnen declareren
int potPin = A5;
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int ledPin4 = 5;
int ledPin5 = 6;
int ledPin6 = 7;
int ledPin7 = 8;

void setup()
{
  //Pinmode instellen waarbij we de potmeter als input instellen
  pinMode(potPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  //Serial monitor aanzetten
  Serial.begin(9600);
}

void loop()
{
  
  //hoeveel voltage er binnenkomt
  int potMeasure = analogRead(A5);
  //De meting in de serial monitor printen
  Serial.println(potMeasure);
  
  
  //De if-statements zodat de lampjes aan kunnen gaan de lampjes naarmate je verder draait aan de potmeter. 
  if(potMeasure < 30){
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW); 
    digitalWrite(ledPin6,LOW); 
    digitalWrite(ledPin7,LOW); 
  }
  else if(potMeasure < 146)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW); 
    digitalWrite(ledPin6,LOW); 
    digitalWrite(ledPin7,LOW); 
  }
  else if (potMeasure < 292)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,LOW);
    digitalWrite(ledPin4,LOW);
    digitalWrite(ledPin5,LOW); 
    digitalWrite(ledPin6,LOW); 
    digitalWrite(ledPin7,LOW); 
  }
  else if (potMeasure < 438)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,LOW); 
    digitalWrite(ledPin5,LOW); 
    digitalWrite(ledPin6,LOW); 
    digitalWrite(ledPin7,LOW); 
  }
  else if (potMeasure < 584)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin5,LOW); 
    digitalWrite(ledPin6,LOW); 
    digitalWrite(ledPin7,LOW); 
  }
  else if (potMeasure < 730)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin5,HIGH); 
    digitalWrite(ledPin6,LOW); 
    digitalWrite(ledPin7,LOW); 
  }
  else if (potMeasure < 876)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin5,HIGH); 
    digitalWrite(ledPin6,HIGH); 
    digitalWrite(ledPin7,LOW); 
  }
  else if (potMeasure < 1022)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(ledPin4,HIGH);
    digitalWrite(ledPin5,HIGH); 
    digitalWrite(ledPin6,HIGH); 
    digitalWrite(ledPin7,HIGH); 
  }
  
  
}
