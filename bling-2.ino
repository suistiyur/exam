int led[] = {2,8,11};
void setup() {
    Serial.begin(9600);
    pinMode(led[0],OUTPUT);
    pinMode(led[1],OUTPUT);
    pinMode(led[2],OUTPUT);   
 }

void loop() {
  for(;;){
  Serial.println("led123 on");
  digitalWrite(led[0], HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], HIGH);
  delay(500);
  
  Serial.println("led1 on"); 
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);  // turn the LED off by making the voltage LOW
  delay(500);    
  
  Serial.println("led2 on");
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);

  Serial.println("led3 on");
  digitalWrite(led[1], LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led[2], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  
  digitalWrite(led[2], LOW);    // turn the LED off by making the voltage LOW
  };
}