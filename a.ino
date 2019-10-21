int sensorValue=0;
void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT);
}

void loop()
{
  sensorValue=analogRead(A4);
  int reading=digitalRead(8);
  delay(100);
  if(reading==HIGH)
  {
      Serial.println(sensorValue);
    
  }
}
