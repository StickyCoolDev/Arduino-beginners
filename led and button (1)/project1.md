# Button and led

in this project you will learn the basics of `arduino`.
simulate the project at [led and button](https://wokwi.com/projects/411336385024901121) at wowki .
and don't forget to like ❤️



## what you will learn 
1. declaring variables
2. reading and writing pins
3. using the serial monitor

# Diagram
diagram of the .ino project.
![Screenshot_20241010_115241_Chrome](https://github.com/user-attachments/assets/6bb95536-b864-4568-97d8-5654944a87fb)

## more about the code 

### serial monitor
a serial monitor mainly used for debging code



```
Serial.begin(9600)
```
this code will to start the serial monitor. it always has to be in the
`setup()` function. 


print something in the serum monitor use the `Serial.print()` function.
the code will be something like this.


``` cpp
void setup() {
  Serial.begin(9600);
  Serial.print("cool");! 
}
```

_*NOTE*_: `Serial.print()` will print in the same line and `Serial.printnl()` will print on a new line.




### Pinmode (input and output)
To turn on a led or check if a button is pressed or not we use inputs and outputs. inputs are LED, screen, buzzer's. And outputs are buttons, switches, etc.

to set a pin as a input/output we use `pimMode()` function.
```
pimMode(pin_number, Value) //value can be input or output
// and pin_number will be the number of the pin that the device is plugged //into
```

