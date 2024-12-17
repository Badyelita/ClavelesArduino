#define BUZZER 11
#define POTENCIOMETRO 5

void setup() {
  pinMode(BUZZER,OUTPUT);
  pinMode(POTENCIOMETRO,INPUT);
}

void loop() {
  int ValueFromPotenciometro = analogRead(POTENCIOMETRO);           //lee un valor analogico desde el pin POTENCIOMETRO
  int ValueToBuzzer = map(ValueFromPotenciometro, 0,1023,0,255);    //Convierte el rango original(0-1023) a uno que funciones con la funcion analogWrite (0-255)
  analogWrite(BUZZER,ValueToBuzzer);
}