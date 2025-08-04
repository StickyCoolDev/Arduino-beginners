# Button and LED Basics with Arduino

This project introduces fundamental concepts of Arduino programming by demonstrating how to control an LED with a pushbutton.

You can simulate this project online using Wokwi: [Button and LED Simulation](https://wokwi.com/projects/411336385024901121)

---

## What You'll Learn

This project will guide you through the following essential Arduino concepts:

1.  **Declaring Variables:** Learn how to create and use variables in your Arduino sketches.
2.  **Reading Digital Input:** Understand how to read the state of a digital input pin connected to a button.
3.  **Writing Digital Output:** Learn how to control a digital output pin connected to an LED.
4.  **Using the Serial Monitor:** Discover how to use the Serial Monitor for debugging and displaying information.

---

## Project Diagram
Here is the circuit setup for this project.

![Button and LED Diagram](https://github.com/user-attachments/assets/6bb95536-b864-4568-97d8-5654944a87fb)

---

## Code Breakdown

Let's dive deeper into the code elements, explaining each part of the program.

### Declaring Variables

We start by declaring variables to represent our components. This makes our code easier to read and modify.

```cpp
int button = 3;
int LED1 = 10;
```

 * int button = 3;: We create an integer variable named button and assign it the value 3, which corresponds to digital pin 3 on the Arduino.
 * int LED1 = 10;: We create an integer variable named LED1 and assign it the value 10, which corresponds to digital pin 10.

### The setup() Function
The setup() function runs just once when the Arduino board is powered on or reset. We use it to initialize our pins and serial communication.

```cpp
void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
}
```

 Serial.begin(9600);: This line starts serial communication at a baud rate of 9600 bits per second, which allows the Arduino to send messages to the computer's Serial Monitor.
 * pinMode(button, INPUT_PULLUP);: The pinMode() function configures a specified pin to behave as an input or an output. Here, we set the button pin to INPUT_PULLUP. This is a convenient way to read a button's state without needing an external pull-up resistor.
 * pinMode(LED1, OUTPUT);: We set the LED1 pin as an OUTPUT so that we can send a voltage to it to turn the LED on or off.

### The loop() Function
The loop() function runs continuously after the setup() function has finished. This is where the main logic of our program resides.
```cpp
void loop()
{
  int Button1Pressed = digitalRead(button);

  if (Button1Pressed == LOW)
  {
    Serial.println("Button pressed!");
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
}
```

 * int Button1Pressed = digitalRead(button);: The digitalRead() function reads the state of the specified pin. It returns LOW (0 volts) if the pin is connected to ground and HIGH (5 volts) if it is connected to a power source. With INPUT_PULLUP, the pin is normally HIGH, and when the button is pressed, it connects the pin to ground, making the state LOW.
 * if (Button1Pressed == LOW): We use an if statement to check if the button has been pressed. If the condition is true (the button is pressed), the code inside the curly braces {} will run.
 * Serial.println("Button pressed!");: This line prints the message "Button pressed!" to the Serial Monitor. The ln at the end of println adds a new line after the message, which makes the output much cleaner.
 * digitalWrite(LED1, HIGH);: The digitalWrite() function writes a HIGH (5 volts) or LOW (0 volts) value to a digital pin. When the button is pressed, we write HIGH to the LED1 pin to turn on the LED.
 * else: If the if condition is false (the button is not pressed), the code inside this else block will run instead.
 * digitalWrite(LED1, LOW);: If the button is not pressed, we write LOW to the LED1 pin, which turns the LED off.

### Full Code
Here's the complete code, ready to upload to your Arduino board.
```cpp
int button = 3;
int LED1 = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
}

void loop()
{
  int Button1Pressed = digitalRead(button);

  if (Button1Pressed == LOW)
  {
    Serial.println("Button pressed!");
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
}
```
