# Arduino Quick Reference

- `setup()` runs once after reset or power-up.
- `loop()` repeats while the board is running.
- `pinMode(pin, OUTPUT)` configures a pin as output.
- `digitalWrite(pin, HIGH)` sets a digital output HIGH.
- `digitalRead(pin)` reads a digital input.
- `analogRead(pin)` reads an analog input on supported boards.
- `millis()` returns elapsed milliseconds.
- `Serial.begin(9600)` starts serial communication.

Safety: verify board logic voltage and pin current limits. Use suitable resistors with LEDs and drivers for motors/pumps. Never connect mains voltage as a beginner project.
