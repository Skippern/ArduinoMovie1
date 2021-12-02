// defined1
//
// Everything stored in #define
#define FILENAME "defined1.ino"
#define DEMO "A demonstration in code and memory efficiency"

#define LOOPHEAD "I am a loop!"
#define IAMLOOP "I am repeated every "
#define MILLIS_A " millisecond"

#define LOOPTIME 1000

#define TESTTEXT "This is a test!"
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4.0
#define FIVE 5
#define ADD " + "

void setup() {
  Serial.println(FILENAME);
  Serial.println();
  Serial.println(DEMO);
  Serial.println();
}

void loop() {
  Serial.println(LOOPHEAD);
  Serial.print(IAMLOOP);
  Serial.print(LOOPTIME);
  Serial.println(MILLIS_A);
  Serial.println();
  Serial.println();
  test();
  delay(LOOPTIME);
}

void test() {
  Serial.println(TESTTEXT);

  Serial.print(FOUR);

  Serial.print(ONE); Serial.print(ADD); Serial.println(TWO);
  Serial.println(ONE + TWO);
  Serial.print(ONE); Serial.print(ADD); Serial.print(TWO);
  Serial.print(ADD); Serial.print(THREE); Serial.print(ADD);
  Serial.print(FOUR); Serial.print(ADD); Serial.println(FIVE);
  Serial.println(ONE + TWO + THREE + FOUR + FIVE);
  
  Serial.println();
  Serial.println();
}
