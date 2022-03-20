int sal3 = 10; //delcara la variable
int pin1 = 7; //delcara la variable
int pin2 = 6;//delcara la variable

void setup() {
 pinMode(sal3, OUTPUT);// Se establece como salida 
 pinMode(pin1, OUTPUT);// Se establece como salida 
 pinMode(pin2, OUTPUT);// Se establece como salida 
}

void loop () {
 analogWrite(sal3, 255);
 digitalWrite(pin1, HIGH);// Se establece como encendida la puerta
 digitalWrite(pin2, LOW);// Se establece como apagada la puerta
 delay (5000);
 digitalWrite(pin1, LOW);// Se establece como apagada la puerta
 digitalWrite(pin2, LOW);// Se establece como apagada la puerta
 delay (5000);
}
