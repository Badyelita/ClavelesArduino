#include "protothreads.h" //biblioteca

//aqui creamos las diferentes acciones a realizar de manera simultanea y paralela
pt ptParpadeo;
pt ptParpadeo2;

//definimos lo que hace uno de los parpadeos
int parpadeo1(struct pt* pt) {
  PT_BEGIN(pt); //importante iniciar asi

  // Loop forever
  for(;;) {
    digitalWrite(10, HIGH);
    PT_SLEEP(pt, 1000);   //esto sustituye el delay(1000)
    digitalWrite(10, LOW);  
    PT_SLEEP(pt, 1000);
  }

  PT_END(pt); //importante terminar asi
}

//segundo parpadeo
int parpadeo2(struct pt* pt) {
  PT_BEGIN(pt);

  // Loop forever
  for(;;) {
    digitalWrite(13, HIGH);
    PT_SLEEP(pt, 500);   //esto sustituye el delay(1000)
    digitalWrite(13, LOW);  
    PT_SLEEP(pt, 500);
  }

  PT_END(pt);
}
//---------------------------------------------------------------------
//llamamos a las acciones
void setup() {
  PT_INIT(&ptParpadeo); //asi se llama con la biblioteca Protothreads
  PT_INIT(&ptParpadeo2);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  PT_SCHEDULE(parpadeo1(&ptParpadeo));
  PT_SCHEDULE(parpadeo2(&ptParpadeo2));
}
