//Valor de las notas.


const int BUTTON_PIN = 2;

int tonica = 72;
int terceraMayor = 76;
int quinta = 79;
int Gsus4 = 83;
boolean pin = LOW;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  pin = digitalRead(BUTTON_PIN);
  if (!pin)
  {
  noteOn(144,tonica,0x50);
  noteOn(144,terceraMayor,0x50);
  noteOn(144,quinta,0x50);
  noteOn(144,Gsus4,0x50);
  delay(1000);
  noteOn(128,tonica,0x30);
  noteOn(128,terceraMayor,0x30);
  noteOn(128,quinta,0x30);
  noteOn(128,Gsus4,0x30);
  }
}

void noteOn(int cmd, int pitch, int velocity) 
{
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}
