#include <LiquidCrystal_I2C.h>
   
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Inicia el LCD en la dirección 0x27 con 16 caracteres y 2 líneas

//caracteres plantita
#pragma region floranimacion1
byte flor1[8] = { B00000, B00000, B00000, B00011, B00011, B00011, B00000, B00000};
byte flor2[8] = { B00000, B00000, B00001, B10010, B10010, B11010, B11010, B00100};
byte flor3[8] = { B00000, B00000, B00000, B00000, B00000, B00000, B00000, B11100};
byte flor4[8] = { B00100, B00101, B00101, B00010, B00010, B00001, B00011, B01111};
byte flor5[8] = { B11100, B11100, B10000, B00000, B00000, B00000, B10000, B11100};
#pragma endregion
#pragma region floranimacion2
byte flore1[8] = { B00000, B00000, B00000, B00001, B00001, B00001, B00000, B00000};
byte flore2[8] = { B00000, B00000, B00010, B11001, B11001, B11101, B01101, B00010};
byte flore3[8] = { B00000, B00000, B00000, B00000, B00000, B00000, B01110, B01110};
byte flore4[8] = { B00010, B00010, B00011, B00001, B00001, B00001, B00011, B01111};
byte flore5[8] = { B11110, B11000, B00000, B00000, B00000, B00000, B10000, B11100};
#pragma endregion

void setup() {
  lcd.init();
  lcd.backlight();      
  lcd.clear();
  pinMode (13, OUTPUT);  

  lcd.setCursor(5, 0);
  lcd.print("NO HAY");

  lcd.setCursor(4, 1);
  lcd.print("CLAVELES");
}

void loop() { 
  digitalWrite (13,1);
  animacionPlanta();
}

void animacionPlanta(){
  //frame 1
  #pragma region llamar animacion 1     //llamar caracteres primer frame
  lcd.createChar(0, flor1);
  lcd.createChar(1, flor2);
  lcd.createChar(2, flor3);
  lcd.createChar(3, flor4);
  lcd.createChar(4, flor5);
  #pragma endregion

  #pragma region Fila11                 //escribir en pantalla primer frame
  lcd.setCursor(0,0);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2)); 
  #pragma endregion
  #pragma region Fila21                 //escribir en pantalla segundo frame
  lcd.setCursor(0,1); 
  lcd.print (" ");
  lcd.write(byte(3));
  lcd.write(byte(4));
  #pragma endregion
  
  #pragma region Fila11                 //escribir en pantalla primer frame
  lcd.setCursor(13,0);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2)); 
  #pragma endregion
  #pragma region Fila21                 //escribir en pantalla segundo frame
  lcd.setCursor(13,1); 
  lcd.print (" ");
  lcd.write(byte(3));
  lcd.write(byte(4));
  #pragma endregion
  delay(1000);
 
  //frame 2
  #pragma region llamar animacion 2     //llamar caracteres segunda frame
  lcd.createChar(5, flore1);
  lcd.createChar(6, flore2);
  lcd.createChar(7, flore3);
  lcd.createChar(8, flore4);
  lcd.createChar(9, flore5);
  #pragma endregion

  #pragma region Fila12
  lcd.setCursor(0,0);
  lcd.write(byte(5));
  lcd.write(byte(6));
  lcd.write(byte(7));
  #pragma endregion
  #pragma region Fila22
  lcd.setCursor(0,1);
  lcd.print (" ");
  lcd.write(byte(8));
  lcd.write(byte(9));
  #pragma endregion
  
  #pragma region Fila12
  lcd.setCursor(13,0);
  lcd.write(byte(5));
  lcd.write(byte(6));
  lcd.write(byte(7));
  #pragma endregion
  #pragma region Fila22
  lcd.setCursor(13,1);
  lcd.print (" ");
  lcd.write(byte(8));
  lcd.write(byte(9));
  #pragma endregion
  delay(1000);
}