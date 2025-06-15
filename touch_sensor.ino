#define TOUCH_PIN 2  // Connect touch sensor to digital pin 2
#define LED_PIN 5    // Connect LED to digital pin 5

bool ledState = false;  // LED ON/OFF state

void setup() {
    pinMode(TOUCH_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    if (digitalRead(TOUCH_PIN) == HIGH) {  // If the sensor is touched
        ledState = !ledState;              // Toggle LED state (ON/OFF)
        digitalWrite(LED_PIN, ledState);   // Set LED based on the new state
        delay(300);  // Delay to avoid rapid toggling when touched
    }
}
