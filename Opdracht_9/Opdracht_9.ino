Bron: ELOI()

    const int LedPinnen[] = {13, 10, 5, 3};
    int Knipperen[] = {-1, 500, 500, -1};
    int IrPin = 13;
    int SelectedLed = 0;
    int Status[] = {LOW, LOW, LOW, LOW};
    int Last[] = {0, 0, 0, 0};


//    IRrecv IrSensor(IrPin);
//    decode_results Uitlsag;
//    
    void setup(){
        Serial.begin(9600);
        IrSensor.enableIRIn();
    }
    void loop(){
        unsigned long Tijd = millis();
        if(Knipperen[0] != -1){
            if(Tijd - Last[0] >= Knipperen[0]){
                Last[0] = Tijd;
                Status[0] = (Status[0] == LOW) ? HIGH : LOW;
                digitalWrite(LedPinnen[0], Status[0]);
            }
        }
        if(Knipperen[1] != -1){
            if(Tijd - Last[1] >= Knipperen[1]){
                Last[1] = Tijd;
                Status[1] = (Status[1] == LOW) ? HIGH : LOW;
                digitalWrite(LedPinnen[1], Status[1]);
            }
        }
        if(Knipperen[2] != -1){
            if(Tijd - Last[2] >= Knipperen[2]){
                Last[2] = Tijd;
                Status[2] = (Status[2] == LOW) ? HIGH : LOW;
                digitalWrite(LedPinnen[2], Status[2]);
            }
        }
        if(Knipperen[3] != -1){
            if(Tijd - Last[3] >= Knipperen[3]){
                Last[3] = Tijd;
                Status[3] = (Status[3] == LOW) ? HIGH : LOW;
                digitalWrite(LedPinnen[3], Status[3]);
            }
        }
        if (IrSensor.decode(Uitlsag)){
            Serial.println(Uitlsag.value);
            if(SelectedLed == 0){
                switch(Uitlsag.value){
                    case 16582903:
                        SelectedLed = 1;
                        break;
                    case 16615543:
                        SelectedLed = 2;
                        break;
                    case 16599223:
                        SelectedLed = 3;
                        break;
                    case 16591063:
                        SelectedLed = 4;
                        break;
                }
                IrSensor.resume();
            } else {
                switch(Uitlsag.value){
                    case 16582903:
                        DelaySwitch(100);
                        break;
                    case 16615543:
                        DelaySwitch(200);
                        break;
                    case 16599223:
                        DelaySwitch(300);
                        break;
                    case 16591063:
                        DelaySwitch(400);
                        break;
                    case 16623703:
                        DelaySwitch(500);
                        break;
                    case 16607383:
                        DelaySwitch(600);
                        break;
                    case 16586983:
                        DelaySwitch(700);
                        break;
                    case 16619623:
                        DelaySwitch(800);
                        break;
                    case 16603303:
                        DelaySwitch(900);
                        break;
                }
                SelectedLed = 0;
                IrSensor.resume();
            }
        }
    }


    void DelaySwitch(int Delay){
        if(SelectedLed == 1){
            Knipperen[0] = Delay;
        }
        else if(SelectedLed == 2) {
            Knipperen[1] = Delay;
        }
        else if(SelectedLed == 3) {
            Knipperen[2] = Delay;
        }
        else if(SelectedLed == 4) {
            Knipperen[3] = Delay;
        }
    }
