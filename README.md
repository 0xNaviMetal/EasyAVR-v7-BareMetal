# EasyAVR-v7-BareMetal
# 🚀 EasyAVR v7 Bare-Metal Series

Welcome to my bare-metal journey! In this repository, I am writing pure C code from scratch to master every single peripheral on the **EasyAVR v7 Development Board**. 

No heavy HAL libraries and no Arduino core—just directly manipulating hardware registers to understand how the microcontroller truly works under the hood. I am building this step-by-step, and if you have an EasyAVR v7 board sitting on your desk, you can follow along and do it too!

## 🛠️ The Hardware
Here is the beast we are working with—the EasyAVR v7 by MikroElektronika. 

 <img src="assets/114754.jpg" width="400" alt="EasyAVR v7 Board">


## 💻 Tools & Tech Stack
* **Board:** EasyAVR v7 (MikroElektronika)
* **MCU Target:** ATmega32 (8.0 MHz)
* **IDE:** Microchip Studio
* **Language:** C (Bare-Metal / avr-gcc)
* **Programmer:** Onboard mikroProg using AVRFLASH

## ⚙️ My Development Workflow

**1. Writing & Compiling**
All code is written from scratch in **Microchip Studio**. I build the bare-metal C code here to generate the `.hex` file.

 <img src="assets/114753.png" width="400" alt="Microchip Studio Build Succeeded">

**2. Flashing the Board**
Once the build succeeds, I use the **AVRFLASH tool** to write the `.hex` file directly to the microcontroller via the onboard USB programmer.

  <img src="assets/114634.png" width="400" alt="AVRFLASH Software">

