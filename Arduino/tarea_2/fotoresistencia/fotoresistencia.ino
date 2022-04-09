int analogPin=0;//delcara la variable
int valorLDR=0;//delcara la variable
int umbralNumber=450;//delcara el valor maximo para que el resistor deje pasar la corriente 
int LED=13;//delcara la variable

void setup(){
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  valorLDR=analogRead(analogPin);// Se lee el valor de la fotoresistencia
  if (valorLDR >= umbralNumber){
    digitalWrite(LED, HIGH); //si es menor esta encendido el led
  }
  else{
    digitalWrite(LED, LOW); //si es mayor se apaga el led
  }
}
