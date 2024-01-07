int SENSOR;

void setup() {
  Serial.begin(9600);       //
  pinMode (13, OUTPUT);
}

void loop() {
  digitalWrite (13,1);
  SENSOR = analogRead(A0);
  comprobacion();
  //Serial.println(SENSOR);   //para mostrar en el monitor
  //delay(1000);
}

void comprobacion(){
  if (SENSOR <= 30){
    Serial.println(SENSOR);
    Serial.println("AGUAAAA AGUAAAA");
  }
  else if (SENSOR >30){
    Serial.println(SENSOR);
    Serial.println("OMG IS WET");
  }
}
