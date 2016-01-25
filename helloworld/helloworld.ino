const int buttonPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == HIGH) {
    Serial.write('H');
  } else {
    Serial.write('L');
  }

  delay(1000);
}

void test() {
  Serial.read();
}

