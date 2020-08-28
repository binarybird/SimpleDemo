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
  pulse(CH_8, 1);
  pulse(CH_7, 1);
  pulse(CH_6, 1);
  pulse(CH_5, 1);
  pulse(CH_4, 1);
  pulse(CH_3, 1);
  pulse(CH_2, 1);
  pulse(CH_1, 1);
}

void pulse(int channel, int lengthInSec) {
  digitalWrite(channel, HIGH);
  delay(lengthInSec*1000);
  digitalWrite(channel, LOW);
}
