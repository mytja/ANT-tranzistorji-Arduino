// POZOR: NE DOTIKAJ SE KODE, DOKLER NE PRIDEŠ DO DELA, KJER PIŠE, DA SE LAHKO!

#include "transistor-base.hpp"

#define LED 12
//#define DEBUG true

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

  Serial.begin(9600);
}

void loop() {
  // uporabljamo internal pull-up resistorje, zato inversion
  bool I1 = !digitalRead(2);
  bool I2 = !digitalRead(3);
  bool I3 = !digitalRead(4);
  bool I4 = !digitalRead(5);
  bool I5 = !digitalRead(6);
  bool I6 = !digitalRead(7);
  bool I7 = !digitalRead(8);
  bool I8 = !digitalRead(9);

// TUKAJ SE LAHKO ZAČNEŠ DOTIKATI KODE
  bool logic = AND(I1, I2);
// NAPREJ SE NE DOTIKAJ VEČ KODE

#ifdef DEBUG
  Serial.print(I1);
  Serial.print(" ");
  Serial.print(I2);
  Serial.print(" ");
  Serial.print(logic);
  Serial.println();
#endif

  digitalWrite(LED, logic ? HIGH : LOW);
}
