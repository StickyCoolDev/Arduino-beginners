int button = 3;

//add many LEDs as you like

int LED1 = 10;
// int LED2 = 11

void setup()
{
  Serial.begin(115200);
  pinMode(button, INPUT_PULLUP); // set the button as input
  pinMode(LED1, OUTPUT); // and set the LED as output

}

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