
void setup()
{
  char dallor = 0x24;
  char Alpha[7] = {0x46,};

  Serial.begin(9600);

  Serial.println("Base");
  for(int a = 5; a > 0; a--)
  {
    for(int k = 6; k > a; k--)
    {
      Serial.print(dallor);
    }
    Serial.println();
  }

  Serial.println("Two");
  for(int a = 0; a < 6; a++)
  {
    for(int k = 0; k <= a; k++)
    {
      Alpha[k + 1] = Alpha[k] - 1;
      Serial.print(Alpha[k]);
    }
    Serial.println();
  }
}

void loop()
{

}
