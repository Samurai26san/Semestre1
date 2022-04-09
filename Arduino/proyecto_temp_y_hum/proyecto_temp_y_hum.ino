#include "DHT.h"
#include <Adafruit_Sensor.h>
//Se define como entrada del lector el puerto 8
//El DHT se determina el puerto y el tipo del sensor
const int entrada = 8;
float hum;
float temp;
DHT dht(entrada,DHT11);

void setup() {
//Se inicia el puerto para la gráfica y el sensor 
Serial.begin (9600);
dht.begin ();  

}

void loop() {

 //Se guarda las variables la lectura con la libreria dht
 float hum = dht.readHumidity();
 float temp = dht.readTemperature ();
 // Se muestra en la pantalla los valores 
 Serial.print("La temperatura ambiente es de: ");
 Serial.println(temp);
 Serial.print("La humedad del ambiente es de: ");
 Serial.println(hum);
 //Espera para calcular los valores
 delay (100);
}
