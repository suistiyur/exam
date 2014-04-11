int on = LOW;
int off = HIGH;
int pins[] = {2,3,4,5,6,7,8,9};



int digits[10][8] = {
  {on,on,on,on,on,on,off,on},//0
  {off,on,on,off,off,off,off,off},//1
  {on,on,off,on,on,off,on,on},//2
  {on,on,on,off,on,off,on,off},//3
  {off,on,on,off,off,on,on,on},//4
  {on,off,on,off,on,on,on,off},//5
  {on,off,on,on,on,on,on,on},//6
  {on,on,on,off,off,off,off,off},//7
  {on,on,on,on,on,on,on,on},//8
  {on,on,on,off,off,on,on,off}//9
};


void setup(){
  
  for(int a=0;a<8;a++){
    pinMode(pins[a],OUTPUT);
  } 
}

void loop(){

  for(int a=0;a<10;a++){
    for(int b=0;b<8;b++)
      {
      digitalWrite(pins[b],digits[a][b]);
      
      }
    delay(500);
     
    } 
  }
