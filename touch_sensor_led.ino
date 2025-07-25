int touchPin = 8;     // Touch sensor OUT pin connected to Digital Pin 2
int ledPin = 13;      // LED connected to Digital Pin 13

void setup() {
  pinMode(touchPin, INPUT);   // Set touch sensor as input
  pinMode(ledPin, OUTPUT);    // Set LED as output
}

void loop() {
  int touchState = digitalRead(touchPin);  // Read touch sensor outputl

  if (touchState == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn LED ON if touched
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED OFF if not touched
  }
}
