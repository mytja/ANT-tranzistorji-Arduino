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
  bool A = !digitalRead(2);
  bool B = !digitalRead(3);
  bool C = !digitalRead(4);
  bool D = !digitalRead(5);
  bool E = !digitalRead(6);
  bool F = !digitalRead(7);
  bool G = !digitalRead(8);
  bool H = !digitalRead(9);

// TUKAJ SE LAHKO ZAČNEŠ DOTIKATI KODE
  bool logic = NOT(XOR(A, B));
// NAPREJ SE NE DOTIKAJ VEČ KODE

#ifdef DEBUG
  Serial.print(A);
  Serial.print(" ");
  Serial.print(B);
  Serial.print(" ");
  Serial.print(logic);
  Serial.println();
#endif

  digitalWrite(LED, logic ? HIGH : LOW);
}
