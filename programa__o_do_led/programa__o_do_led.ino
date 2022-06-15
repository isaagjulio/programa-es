#define ledV 2

void setup() 
{
pinMode(ledV, OUTPUT);

}

void loop()
{
digitalWrite(ledV, HIGH);
delay(5000);
digitalWrite(ledV, LOW);
delay(5000);
}
