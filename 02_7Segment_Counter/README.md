# 🔢 Project 02: 7-Segment Multiplexed Counter

A bare-metal C program that implements a 0-99 counter using a 2-digit 7-segment display. 

## ⚙️ Setup
* **MCU:** ATmega32 @ 8.0 MHz
* **Hardware:** EasyAVR v7 (Turn on 7-Segment display switches)
* **Ports Used:** * **PORTC:** Configured as output to drive the 7-segment data lines (Segments A-G).
  * **PORTA (PA0 & PA1):** Configured as output to control the digit multiplexing.

## 🚀 How It Works
* **Hex Array:** Uses a predefined array `numbers[10]` to map digits 0-9 to their corresponding hex values for the display.
* **Multiplexing:** Because both digits share the same data lines on PORTC, the code rapidly switches between the "Units" and "Tens" digits every 5ms using PA0 and PA1. This happens so fast it tricks the human eye into seeing both digits lit up simultaneously.
* **Timing:** The multiplexing loop repeats 50 times, creating a ~500ms delay before the counter increments. It automatically resets to 0 after reaching 99.

## 📸 Demo
<img src="assets/YOUR_VIDEO_NAME.mp4" width="400" alt="7-Segment Counter Demo">
