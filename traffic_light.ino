 void setup() {
  pinMode(1, OUTPUT);  // Green light
  pinMode(2, OUTPUT);  // Yellow light
  pinMode(3, OUTPUT);  // Red light
}

void loop() {
  digitalWrite(3, HIGH);  // Red light ON
  delay(5000);            // Wait for 5 seconds
  digitalWrite(3, LOW);   // Red light OFF
  
  digitalWrite(1, HIGH);  // Green light ON
  delay(5000);            // Wait for 5 seconds
  digitalWrite(1, LOW);   // Green light OFF
  
  digitalWrite(2, HIGH);  // Yellow light ON
  delay(2000);            // Wait for 2 seconds
  digitalWrite(2, LOW);   // Yellow light OFF
}
