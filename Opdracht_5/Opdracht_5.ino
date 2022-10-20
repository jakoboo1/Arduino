//https://github.com/elie605/

//Pinnen instantieren
 int ledRood = 6;
 int ledGroen = 5;
 int ledBlauw = 3;

//De boost voor het versnellen van het wisselen van kleuren
const int snelheid = 100;

void setup() {
  //Pinmodes instellen en de serial monitor aanzetten
    pinMode(ledGroen, OUTPUT);
    pinMode(ledRood, OUTPUT);
    pinMode(ledBlauw, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    for (int gWaarde = 0; gWaarde< 255; gWaarde++) {
      //De rode waarde doorgeven aan de led
        analogWrite(ledRood, gWaarde);
        gWaarde += snelheid;
        Serial.print("Green");
      //De rode waarde van 0 tot en met 255 printen in de serial monitor
        Serial.print(gWaarde);
        Serial.print("\n");
      
        for (int rWaarde = 0; rWaarde < 255; rWaarde++) {
          //De groene waarde doorgeven aan de led
            analogWrite(ledGroen, rWaarde);
            rWaarde += snelheid;
            Serial.print("\t");
            Serial.print("Red");
          //De groene waarde van 0 tot en met 255 printen in de serial monitor
            Serial.print(rWaarde);
            Serial.print("\n \t \t");
          
            for (int bWaarde = 0; bWaarde < 255; bWaarde++) {
              //De blauwe waarde doorgeven aan de led
                analogWrite(ledBlauw, bWaarde);
                bWaarde += snelheid;
                Serial.print("Blue");
              //De blauwe waarde van 0 tot en met 255 printen in de serial monitor
                Serial.print(rWaarde);
                Serial.print("\t");
            }
            Serial.print("\n");
        }
    }
}
