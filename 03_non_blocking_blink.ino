const int ledPin = LED_BUILTIN;
const unsigned long interval = 500;
unsigned long previousMillis = 0;
bool ledState = false;
void setup() { pinMode(ledPin, OUTPUT); }
void loop() {
  unsigned long now = millis();
  if (now - previousMillis >= interval) {
    previousMillis = now; ledState = !ledState;
    digitalWrite(ledPin, ledState ? HIGH : LOW);
  }
}
