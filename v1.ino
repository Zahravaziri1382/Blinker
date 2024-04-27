int ledpin=8;
void setup() {
pinMode(ledpin,OUTPUT); // put your setup code here, to run once:

}

void loop() {
 digitalWrite(ledpin,HIGH); //if the lamp is on
 delay(1000);//circuit delay
 digitalWrite(ledpin,LOW); //if the lamp is off
 delay(1000); //circuit delay  

}
