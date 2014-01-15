char ch;

void setup() { 
  Serial.begin(9600);

}

void loop() {

  if (Serial.available()) 
  {
      ch = Serial.read();
      
      if ( ch == '1' ) 
      { 
         Serial.println("did something");
      }
      else if ( ch == '2' )
      {
        Serial.println("did something else");
      }
      else 
      {
      delay(10);
      }
  }
}
