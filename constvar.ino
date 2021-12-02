// constvar
//
// Everything stored in constant variables
const char filename[] = "constvar.ino";
const char demo[] = "A demonstration in code and memory efficiency";

const char loophead[] = "I am a loop!";
const char iamloop[] = "I am repeated every ";
const char millis_a[] = " millisecond";

const int looptime = 1000;

const char testtext[] = "This is a test!";
const int one = 1;
const int two = 2;
const int three = 3;
const float four = 4.0;
const int five = 5;
const char add[] = " + ";

void setup() {
  Serial.println(filename);
  Serial.println();
  Serial.println(demo);
  Serial.println();
}

void loop() {
  Serial.println(loophead);
  Serial.print(iamloop);
  Serial.print(looptime);
  Serial.println(millis_a);
  Serial.println();
  Serial.println();
  test();
  delay(looptime);
}

void test() {
  Serial.println(testtext);

  Serial.println(four);

  Serial.print(one); Serial.print(add); Serial.println(two);
  Serial.println(one + two);
  Serial.print(one); Serial.print(add); Serial.print(two);
  Serial.print(add); Serial.print(three); Serial.print(add);
  Serial.print(four); Serial.print(add); Serial.println(five);
  Serial.println(one + two + three + four + five);

  Serial.println();
  Serial.println();
}
