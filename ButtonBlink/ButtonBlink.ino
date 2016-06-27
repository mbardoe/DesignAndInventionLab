/*
Button Blink - Jenna Beckley and Matt Bardoe

Hit the button and then the LED flashes a set number of times.

*/

const int Ledpin=3;
const int switchpin=2;
int switchVal;

void setup(){
  pinMode(Ledpin,OUTPUT);
  pinMode(switchpin,INPUT);
  Serial.begin(9600);
  digitalWrite(Ledpin,LOW);
  
  
}

void loop(){
  switchVal=DigitalRad(switchpin);
  if (switchVal==HIGH){
    for(int i=0; i<5;i=i+1){
      digitalWrite(Ledpin,HIGH);
      delay(500);
      digitalWrite(Ledpin,LOW);
      delay(500);
    }
  
}

