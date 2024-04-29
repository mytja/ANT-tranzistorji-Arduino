// POZOR: KODE V TEJ DATOTEKI SE NE DOTIKAJ!

bool NOT(bool a) {
  return !a;
}

bool AND(bool a, bool b) {
  return a && b;
}

bool NAND(bool a, bool b) {
  return !AND(a, b);
}

bool OR(bool a, bool b) {
  return a || b;
}

bool NOR(bool a, bool b) {
  return !OR(a, b);
}

bool XOR(bool a, bool b) {
  return OR(a, b) && NAND(a, b);
}

bool XNOR(bool a, bool b) {
  return !XOR(a, b);
}
