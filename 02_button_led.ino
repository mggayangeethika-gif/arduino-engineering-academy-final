const int buttonPin = 2;
const int ledPin = LED_BUILTIN;
void setup() { pinMode(buttonPin, INPUT_PULLUP); pinMode(ledPin, OUTPUT); }
void loop() {
  bool pressed = (digitalRead(buttonPin) == LOW);
  digitalWrite(ledPin, pressed ? HIGH : LOW);
}
