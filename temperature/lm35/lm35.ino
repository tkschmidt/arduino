float temp;
int tempPin = 0;
int incomingByte = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
   if (Serial.available() > 0) {
      incomingByte = Serial.read();
    temp = analogRead(tempPin);
  temp = temp * 0.48828125;
  Serial.println(temp);
  delay(4000);
   }
}
