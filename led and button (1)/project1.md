# Button and LED Basics with Arduino

This project introduces the fundamental concepts of Arduino, 

You can simulate this project online using Wokwi: [Button and LED Simulation](https://wokwi.com/projects/411336385024901121)

If you find this helpful, please consider giving it a like ❤️!

## What You Will Learn

This project will guide you through the following essential Arduino concepts:

1.  **Declaring Variables:** Learn how to create and use variables in your Arduino sketches.
2.  **Reading Digital Input:** Understand how to read the state of a digital input pin connected to a button.
3.  **Writing Digital Output:** Learn how to control a digital output pin connected to an LED.
4.  **Using the Serial Monitor:** Discover how to use the Serial Monitor for debugging and displaying information.

## Project Diagram
Circuit setup:

![Button and LED Diagram](https://github.com/user-attachments/assets/6bb95536-b864-4568-97d8-5654944a87fb)

## Code

Let's dive deeper into the code elements:

### Serial Monitor

The Serial Monitor is an tool for debugging your Arduino code and displaying text information from your board to your computer.

```cpp
Serial.begin(9600);
```
by using the code given, we can set up serial communication. it's recommended to run it inside of the ***setup*** function as it's only need to be run once:

```cpp
void setup()
{
  Serial.begin(9600);
}
```

now let's print something . to print something in the serial monitor we need to use the function:
```cpp
Serial.print("Super Cool");
```