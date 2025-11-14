#define T_F 349
#define T_G 392
#define T_A 440
#define T_B 493

const int F = 7;
const int G = 6;
const int A = 5;
const int B = 4;
const int Buzz = 11;

void setup() {

  pinMode(F, INPUT);
  digitalWrite(F, HIGH);

  pinMode(G, INPUT);
  digitalWrite(G, HIGH);

  pinMode(A, INPUT);
  digitalWrite(A, HIGH);

  pinMode(B, INPUT);
  digitalWrite(B, HIGH);
}

void loop() {
  while (digitalRead(F) == LOW)
  {
    tone(Buzz, T_F);
  }
  while (digitalRead(G) == LOW)
  {
    tone(Buzz, T_G);
  }
  while (digitalRead(A) == LOW)
  {
    tone(Buzz, T_A);
  }
  while (digitalRead(B) == LOW)
  {
    tone(Buzz, T_B);
  }
  noTone(Buzz);
}

