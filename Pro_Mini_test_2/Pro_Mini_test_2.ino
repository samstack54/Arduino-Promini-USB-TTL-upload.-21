 // Pro Mini test : Digital and Analog

 bool state = 0 ;
 byte led = 13 ;
 
 void setup() {
  pinMode(led, 1) ;
  Serial.begin(9600) ;
 }

 void loop() {
  
  digitalWrite( led, state ) ;
  delay(500) ;
  state = !state ;

  int val=analogRead(0) ;
  Serial.println(val) ;
 }
