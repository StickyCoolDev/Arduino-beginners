int button = 3;

int LED1 = 10; // use the pin number that your led is pluged into

// the setup function is ran once when the arduino starts (gets power)
void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP); // set the button as input
  pinMode(LED1, OUTPUT); // and set the LED as output

}

// the loop function is ran over and over again untill the arduino is turn off
void loop()
{
  int Button1Pressed = digitalRead(button);
  
  if(Button1Pressed == 0)
  {
    Serial.print("button pressed");
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  
}