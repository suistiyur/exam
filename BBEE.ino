int a = A0;
int val = 0;
int l_pin = 10;
int s_pin = 2;

void setup()
{
    pinMode(l_pin, OUTPUT);
    pinMode(s_pin, OUTPUT);
    Serial.begin(9600);
}
    
void loop()
{
    digitalWrite(l_pin, LOW);
    digitalWrite(s_pin, LOW);
    val = analogRead(a);
    val = map(val, 0, 1023, 0 , 500);
    if(val >=120 ) {
      digitalWrite(l_pin, HIGH) ;
      digitalWrite(s_pin, HIGH);
      delay(3000);
    }
    Serial.println(val);
    delay(20);
}