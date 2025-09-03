void setup() {
  pinMode(5, OUTPUT);    
  pinMode(18, OUTPUT);
}

void loop() {
  digitalWrite(5, HIGH); 
  digitalWrite(18, LOW); 
  delay(1000); 
                   
  digitalWrite(5, LOW); 
  digitalWrite(18, HIGH);   
  delay(1000);                  
}