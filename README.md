# Touch Sensor Controlled LED using Arduino

This simple Arduino project allows you to toggle an LED on and off using a **capacitive touch sensor**. A single tap on the sensor switches the LED state.

## Features

- Touch-based LED control (tap to toggle).
- Simple debounce using a delay.
- Can be used for touch switches or interactive projects.

## Components Used

- Arduino Uno (or compatible board)
- Capacitive Touch Sensor Module (e.g., TTP223)
- LED
- 220Ω resistor (for LED)
- Jumper wires
- Breadboard

## Wiring

| Component         | Arduino Pin |
|------------------|-------------|
| Touch Sensor OUT | D2          |
| LED (+)          | D5          |
| LED (-)          | GND (via 220Ω resistor) |
| Touch VCC        | 5V          |
| Touch GND        | GND         |

