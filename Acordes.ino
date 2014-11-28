//Valor de las notas.

int tonica = 0x40;
int terceraMayor = 0x45;
int quinta = 0x49;
int Gsus4 = 0x54;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  noteOn(0x90,tonica,0x50);
  noteOn(0x90,terceraMayor,0x50);
  noteOn(0x90,quinta,0x50);
  noteOn(0x90,Gsus4,0x50);
}

void noteOn(int cmd, int pitch, int velocity) 
{
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}
