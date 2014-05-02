int Potentionmeter = A0;
int val = 0;
int l_pin = 10;

void setup()
{
    pinMode(l_pin, OUTPUT);
    Serial.begin(9600);
}
    
void loop()
{
    val = analogRead(Potentionmeter);
    val = map(val, 0, 1023, 0 , 255);
    Serial.println(val);
    analogWrite(l_pin, val);
    delay(500);  
}