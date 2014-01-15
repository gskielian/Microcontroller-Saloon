int reading;

void setup() {
   pinMode(13,OUTPUT);
     
   pinMode(14, OUTPUT);
   pinMode(18, OUTPUT);
   digitalWrite(14,HIGH);
   digitalWrite(18,LOW);
   
   Serial.begin(9600);
   
}

void loop() {

//take reading and print to serial
 reading = analogRead(2);
 Serial.println(reading);

//blink the led
 digitalWrite(13, HIGH);
 delay(reading);
 digitalWrite(13, LOW);
 delay(reading); 

}
