int estadoBoton=0;     //Guardará el estado del botón (HIGH ó LOW)
void setup(){
    pinMode(2,OUTPUT);     //Donde está conectado el LED
    pinMode(7,INPUT);     //Donde está conectado el pulsador
}
void loop() {
    estadoBoton=digitalRead(7);
    //Si se detecta que el botón está pulsado, se enciende el LED
    if (estadoBoton == HIGH) {
        digitalWrite(2,HIGH);
    } else {
        digitalWrite(2,LOW);
    }
}
