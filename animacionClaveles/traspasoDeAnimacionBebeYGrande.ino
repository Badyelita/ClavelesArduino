#include <LiquidCrystal_I2C.h>
   
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Inicia el LCD en la dirección 0x27 con 16 caracteres y 2 líneas

#pragma region pantaBebeFrame1
byte bebe0[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00010,
  B00001,
  B00011,
  B01111
};
byte bebe1[] = {
  B00000,
  B00000,
  B01000,
  B11000,
  B11000,
  B00000,
  B10000,
  B11100
};
#pragma endregion
#pragma region pantaBebeFrame2
byte bebe0[] = {
  B00000,
  B00000,
  B00001,
  B00011,
  B00011,
  B00000,
  B00011,
  B01111
};
byte bebe1[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B01000,
  B10000,
  B10000,
  B11100
};
#pragma endregion

#pragma region pantaAdulta1
byte grande0[] = {
  B00000,
  B00100,
  B10010,
  B01000,
  B00000,
  B00001,
  B00001,
  B00000
};
byte grande1[] = {
  B00000,
  B00011,
  B00100,
  B01110,
  B10001,
  B00010,
  B00110,
  B11001
};
byte grande2[] = {
  B00000,
  B11000,
  B00100,
  B01111,
  B10000,
  B01001,
  B01110,
  B10001
};
byte grande3[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B00000,
  B00000,
  B00000
};
byte grande4[] = {
  B01000,
  B00111,
  B00000,
  B00000,
  B00110,
  B00001,
  B00011,
  B01111
};
byte grande5[] = {
  B10001,
  B11110,
  B10000,
  B10000,
  B10000,
  B00000,
  B10000,
  B11100
};
#pragma endregion
#pragma region pantaAdulta2
byte grande0[] = {
  B00000,
  B00000,
  B00000,
  B00001,
  B00010,
  B00100,
  B00100,
  B00011
};
byte grande1[] = {
  B00000,
  B01111,
  B10000,
  B11001,
  B00110,
  B01001,
  B11001,
  B00110
};
byte grande2[] = {
  B00000,
  B00000,
  B10000,
  B11100,
  B00010,
  B00100,
  B11000,
  B00100
};
byte grande3[] = {
  B01000,
  B10000,
  B00100,
  B01000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte grande4[] = {
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte grande5[] = {
  B00010,
  B10011,
  B01110,
  B00011,
  B01101,
  B00001,
  B00011,
  B01111
};
byte grande6[] = {
  B00100,
  B11000,
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B11100
};
#pragma endregion

void setup() {

}

void loop() { 
}

