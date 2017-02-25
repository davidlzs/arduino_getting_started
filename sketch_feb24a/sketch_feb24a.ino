int red = 10;
int blue = 9;
int green = 8;
int button = 12;
int buzzer = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, OUTPUT);
  digitalWrite(green, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH) {
    delay(15);
    if (digitalRead(button) == HIGH) {
        tone(buzzer, 9999);
        delay(1000);
        noTone(buzzer);
        changeLights();
      //delay(5000);
    }
  }
}

void changeLights() {
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);

  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(1000);

  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(1000);
}
