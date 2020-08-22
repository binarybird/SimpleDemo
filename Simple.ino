#define CH_1 12
#define CH_2 11
#define CH_3 10
#define CH_4 9
#define CH_5 8
#define CH_6 7
#define CH_7 6
#define CH_8 5

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(CH_8, LOW);
  digitalWrite(CH_1, HIGH);
  delay(1000);
  digitalWrite(CH_1, LOW);
  digitalWrite(CH_2, HIGH);
  delay(1000);
  digitalWrite(CH_2, LOW);
  digitalWrite(CH_3, HIGH);
  delay(1000);
  digitalWrite(CH_3, LOW);
  digitalWrite(CH_4, HIGH);
  delay(1000);
  digitalWrite(CH_4, LOW);
  digitalWrite(CH_5, HIGH);
  delay(1000);
  digitalWrite(CH_5, LOW);
  digitalWrite(CH_6, HIGH);
  delay(1000);
  digitalWrite(CH_6, LOW);
  digitalWrite(CH_7, HIGH);
  delay(1000);
  digitalWrite(CH_7, LOW);
  digitalWrite(CH_8, HIGH);
  delay(1000);
}
