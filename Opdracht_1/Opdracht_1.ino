

int delayTime = 200; 

void setup() {

  // Een for lop voor de initialisatie van elke pin als een output

  for (int Pin = 5; Pin < 13; Pin++) {

    pinMode(Pin, OUTPUT);

  }
}

void loop() {

  // Een for lop voor de laagste pin naar de hoogste pin

  for (int Pin = 5; Pin < 13; Pin++) {

    // Pin aanzetten

    digitalWrite(Pin, HIGH);

    delay(delayTime);
    

    // Pin uitzetten

    digitalWrite(Pin, LOW);

  }

  // Een for lop voor de hoogste pin naar de laagste pin

  for (int Pin = 5; Pin >= 13; Pin--) {

    // Pin aanzetten

    digitalWrite(Pin, HIGH);

    delay(delayTime);
    

    // Pin uitzetten

    digitalWrite(Pin, LOW);

  }
}
