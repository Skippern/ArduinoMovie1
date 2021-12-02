// hardcode
//
// Everything hardcoded, no use of variables

void setup() {
  Serial.println("hardcode.ino");
  Serial.println();
  Serial.println("A demonstration in code and memory efficiency");
  Serial.println();
}

void loop() {
  Serial.println("I am a loop!");
  Serial.print("I am repeated every ");
  Serial.print(1000);
  Serial.println(" millisecond");
  Serial.println();
  Serial.println();
  test();
  delay(1000);
}

void test() {
  Serial.println("This is a test!");

  Serial.println("4.0");
  
  Serial.println("1 + 2");
  Serial.println(1 + 2);
  Serial.println("1 + 2 + 3 + 4.0 + 5");
  Serial.println(1 + 2 + 3 + 4.0 + 5); 

  Serial.println();
  Serial.println();
}
