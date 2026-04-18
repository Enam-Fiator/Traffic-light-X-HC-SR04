//TRAFFIC LIGHT X HC-SR04
int trans = 2 ;
int rec = 4;

int red = 6;
int yellow = 8;
int green = 12;

long distance;
int duration;


void setup() {
  // put your setup code here, to run once:
pinMode(trans, OUTPUT);
pinMode(rec,INPUT);
//start serial communication at9600 baud rate
Serial.begin(9600);

pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trans,LOW);
delay(2);

digitalWrite(trans,HIGH);
delay(10);
digitalWrite(trans,LOW);

duration = pulseIn(rec,HIGH);

distance = duration * 0.034 / 2;


Serial.print("Distance: ");
Serial.print(distance);
Serial.println("cm");

delay(100);

digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);


if (distance <= 5){
  digitalWrite(red, HIGH);
  Serial.print("red");
}
else if(distance >5 && distance <= 10){
  digitalWrite(yellow,HIGH);
    Serial.print("yellow");

}

else{
  digitalWrite(green,HIGH);
    Serial.print("green");

}
}
