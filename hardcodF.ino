// hardcode
//
// Everything hardcoded, no use of variables

void setup() {
  Serial.println(F("hardcodF.ino"));
  Serial.println();
  Serial.println(F("A demonstration in code and memory efficiency"));
  Serial.println();
}

void loop() {
  Serial.println(F("I am a loop!"));
  Serial.print(F("I am repeated every "));
  Serial.print(1000);
  Serial.println(F(" millisecond"));
  Serial.println();
  Serial.println();
  test();
  delay(1000);
}

void test() {
  Serial.println(F("This is a test!"));

  Serial.println(F("4.0"));
  
  Serial.println(F("1 + 2"));
  Serial.println(1 + 2);
  Serial.println(F("1 + 2 + 3 + 4.0 + 5"));
  Serial.println(1 + 2 + 3 + 4.0 + 5); 

  Serial.println();
  Serial.println();
}
