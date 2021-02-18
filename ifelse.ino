const int Pin_Button = 2;
const int Pin_Led = 13;

int State_Button = 0;

void setup() {
  pinMode(Pin_Button, INPUT);
  pinMode(Pin_Led, OUTPUT);
}

void loop() {
  State_Button = digitalRead(Pin_Button);

  if(State_Button == HIGH)
  {
    digitalWrite(Pin_Led, HIGH);
  }

  else
  {
    digitalWrite(Pin_Led, LOW);
  }
}
