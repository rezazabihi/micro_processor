float timeStep = 0.1;
float t = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 float voltag = 10 * sin(2*PI*0.1*t);
 float cosinos = 10 * cos(2*PI*0.1*t);
 t+=timeStep ;
 Serial.print(voltag);
 Serial.print(" ");
 Serial.println(cosinos);
}
