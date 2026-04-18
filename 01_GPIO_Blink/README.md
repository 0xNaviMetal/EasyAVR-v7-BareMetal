# 💡 Project 01: GPIO LED Chaser

A bare-metal C program that creates a sequential LED sweep across all 32 pins of the microcontroller.

## ⚙️ Setup
* **MCU:** ATmega32 @ 8.0 MHz
* **Hardware:** EasyAVR v7 (Turn on PORT LEDs on board switches)
* **Ports Used:** PORTA, PORTB, PORTC, PORTD (Configured as outputs)

## 🚀 How It Works
The code uses bitwise left-shifting (`1 << i`) inside a loop to light up one pin at a time. The active LED travels seamlessly from PORTA to PORTD with a 100ms delay per step, pauses for 500ms at the end, and then repeats.

## 📸 Demo
<img src="assets/YOUR_VIDEO_NAME.mp4" width="400" alt="LED Chaser Demo">
