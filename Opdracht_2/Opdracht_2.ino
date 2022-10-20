//Pinnen definieren

#define Knop 2
#define Led 10

byte ledStatus = LOW;
byte laatsteButtonStatus = LOW;


//delayadvies uit de sheets
 long delayTimer = 50; 
 long veranderingStatus = 0;
    


void setup() {
  //pinMode instellen
  pinMode(Led, OUTPUT);
  pinMode(Knop, INPUT);
}

void loop() {
  
  //Millis als contactdender
  if (millis() - veranderingStatus > delayTimer) {
    
    byte buttonStatus = digitalRead(Knop);
    
    if (buttonStatus != laatsteButtonStatus) {
      veranderingStatus = millis();
      laatsteButtonStatus = buttonStatus;
      
      //if-statement voor het aan en uitzetten van de led
      if (buttonStatus == LOW) {
        ledStatus = (ledStatus == HIGH) ? LOW: HIGH;
        digitalWrite(Led, ledStatus);
      }
      
    }
    
  }
  
}
