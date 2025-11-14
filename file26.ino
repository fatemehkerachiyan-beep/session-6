#define T_D 262
#define BUZZER_PIN 8
#define BTN_PIN 7

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
  }

void loop() {
  while (digitalRead(BTN_PIN) == 0)
  {
    tone(BUZZER_PIN, T_D);
  }
  noTone(BUZZER_PIN);
}
