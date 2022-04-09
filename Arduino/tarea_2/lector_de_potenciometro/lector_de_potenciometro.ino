int potenpin = A0;//delcara la variable  
int potenval = 0; //delcara la variable
int rojo = 9;//delcara la variable   
int amar = 10;//delcara la variable  
int verde = 11; //delcara la variable
int rojoval = 0;//delcara la variable  
int amarval = 0;//delcara la variable
int verdeval = 0;//delcara la variable
void setup()
{ 
  Serial.begin(9600);
  pinMode(rojo, OUTPUT); // Se establece como salida  
  pinMode(amar, OUTPUT);  // Se establece como salida 
  pinMode(verde, OUTPUT); // Se establece como salida
}
void loop()
{
  potenval = analogRead(potenpin);   // Se lee el valor del potenciometro
  if (potenval < 341) 
  {                  
    potenval = (potenval * 3) / 4; 
    rojoval = 256 - potenval;  
    amarval = potenval;       
    verdeval = 1;
    Serial.println(potenval);
  }
  else if (potenval < 682) 
  {
    potenval = ( (potenval-341) * 3) / 4; 
    rojoval = 1;   
    amarval = 256 - potenval;
    verdeval = potenval;      
  }
  else 
  {
    potenval = ( (potenval-683) * 3) / 4; 
    rojoval = potenval;       
    amarval = 1;            
    verdeval = 256 - potenval; 
  }
// Se determina que led se debe encender con que valor del potenciomerto atravez de varias formulas
  analogWrite(rojo, rojoval);   
  analogWrite(amar, amarval); 
  analogWrite(verde, verdeval); 
}
