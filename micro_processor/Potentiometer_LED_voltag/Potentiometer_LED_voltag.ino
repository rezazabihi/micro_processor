int led = 3;         
int potPin = A0;      
int potValue = 0;   

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  potValue = analogRead(potPin);
  int ledValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(led, ledValue);
  float voltage = (potValue / 1023.0) * 5.0; 
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print(" | Voltage: ");
  Serial.println(voltage); 
  delay(100);
}