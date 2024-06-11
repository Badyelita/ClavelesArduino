# include <pt.h>

struct pt hilo1;
struct pt hilo2;


void setup() {
  //parpadeo();
  PT_INIT(&hilo1);
  PT_INIT(&hilo2);
}

void loop() {
  parpadeo(&hilo1);
  parpadeo2(&hilo2);
}

void parpadeo(struct pt *pt){
  PT_BEGIN(pt); //aqui inicia mi Protothread
  static long t = 0;  //en el Protothread no se puede usar la funcion delay

  //void setup(){
    pinMode(10, OUTPUT);
  //}

  //void loop(){
    do{
      digitalWrite(10,1);

      //abajo equivale a delay(1000);
      t = millis();
      PT_WAIT_WHILE(pt,(millis()-t)<1000);  //este protohilo va a esperar mientras + condicion (va a esperar por un seg)

      digitalWrite(10,0);
      t = millis();
      PT_WAIT_UNTIL(pt, (millis()-t)>1000); //igual que el anterior pero este va a esperar a que millis sea mayor que 1000
    }
  //}

  PT_END(pt);
}


void parpadeo2(struct pt *pt){  //Otro hilo que funciona de manera simultanea
  PT_BEGIN(pt); //aqui inicia mi Protothread
  static long t = 0;  //en el Protothread no se puede usar la funcion delay

  //void setup(){
    pinMode(9, OUTPUT);
  //}

  //void loop(){
    do{
      digitalWrite(9,1);

      //abajo equivale a delay(1000);
      t = millis();
      PT_WAIT_WHILE(pt,(millis()-t)<500);  //este protohilo va a esperar mientras + condicion (va a esperar por un seg)

      digitalWrite(9,0);
      t = millis();
      PT_WAIT_UNTIL(pt, (millis()-t)>500); //igual que el anterior pero este va a esperar a que millis sea mayor que 1000
    }
  //}

  PT_END(pt);
}