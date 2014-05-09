int a = A0;
int val = 0;
int l_pin = 10;

void setup()
{
    pinMode(l_pin, OUTPUT);
    Serial.begin(9600);
}
    
void loop()
{
    val = analogRead(a);
    val = map(val, 0, 1023, 0 , 200);
    if(val >=120) digitalWrite(l_pin, HIGH) ;
    else digitalWrite(l_pin, LOW);
    Serial.println(val);
    delay(20);
}