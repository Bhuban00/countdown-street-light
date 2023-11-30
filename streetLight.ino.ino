int red = 10;
int blue = 9;
int green = 8;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green,  OUTPUT);
  
}
void loop(){
digitalWrite(red, HIGH);
delay(3000);
digitalWrite(red,  LOW);
delay(1000);
digitalWrite(blue, HIGH);
delay(1000);
digitalWrite(blue, LOW);
delay(1000);
digitalWrite(blue, HIGH);
delay(1000);
digitalWrite(blue, LOW);
delay(1000);
digitalWrite(green, HIGH);
delay(5000);
digitalWrite(green, LOW);
delay(500);
}
