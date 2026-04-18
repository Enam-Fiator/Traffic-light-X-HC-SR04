# Traffic Light System using HC-SR04 

## Overview

This project is a **smart traffic light system** built using an Arduino Uno and an HC-SR04 ultrasonic sensor. It automatically changes traffic lights (Red, Yellow, Green) based on the distance of an approaching object, simulating real-world traffic control logic.


## Objective

To design a simple **sensor-based traffic control system** that:

* Detects object distance using ultrasonic sensing
* Controls traffic lights based on proximity
* Demonstrates real-time decision making in embedded systems

## Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Red LED
* Yellow LED
* Green LED
* Breadboard
* Jumper wires

##  Circuit Connections

### HC-SR04 Sensor:

* VCC → 5V
* GND → GND
* TRIG → Pin 2
* ECHO → Pin 4

### LEDs:

* Red → Pin 6
* Yellow → Pin 8
* Green → Pin 12

##  Working Principle

The HC-SR04 sensor sends ultrasonic waves and measures the time taken for the echo to return. This is converted into distance (cm). The Arduino then controls the traffic lights based on distance:

* **≤ 5 cm** →  Red LED (STOP)
* **6–10 cm** →  Yellow LED (SLOW / CAUTION)
* **> 10 cm** → Green LED (GO)

##  Features

* Real-time distance measurement
* Automatic traffic light switching
* Simple smart traffic control simulation
* Serial monitor feedback for debugging



##  Learning Outcomes

* Understanding ultrasonic sensors (HC-SR04)
* Working with conditional logic in Arduino
* Controlling multiple outputs (LEDs)
* Building basic smart systems using sensors
