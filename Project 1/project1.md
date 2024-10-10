# Project 1

in this project you will learn the basics of `arduino`.



## what you will learn 
1. declaring variables
2. reading and writing pins
3. using the serial monitor

# Diagram
![Screenshot_20241010_115241_Chrome](https://github.com/user-attachments/assets/6bb95536-b864-4568-97d8-5654944a87fb)

## more about the code 

### serial monitor
a serial monitor mainly used for debging codem


```
Serial.begin(9600)
```
this code will to start the serial monitor. it always has to be in the
`setup()` function. 


print something in the serum monitor use the `print()` function.
the code will be something like this.

```
void setup() {
  Serial.begin(9600);
  Serial.print("cool");! 
}
```


