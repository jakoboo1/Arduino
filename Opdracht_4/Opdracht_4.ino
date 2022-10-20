// https://www.tutorialspoint.com/arduino/arduino_temperature_sensor.htm

//Instantieren float datatype voor de temperatuur
float Temperatuur;

//Pin instantieren
int termometerPin = 0;

void setup() {
  //Serial monitor openen
   Serial.begin(9600);
}

void loop() {
  //uitlezen analoge volt van sensor en opslaan in variabele
   Temperatuur = analogRead(termometerPin);
  
   //omzetten naar celsius
   Temperatuur = Temperatuur * 0.48828125;
   
   Serial.print("TEMPERATUUR = ");
   Serial.print(Temperatuur); //temperatuur in celsius
   Serial.print("*C");
   Serial.println(); //temperatuur weergeven in 1 line
   delay(1000); // frequentie van de meting instellen
}
