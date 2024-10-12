      conat int ledpin=12;
     
        void setup(){

   pinMode(ledpin,OUTPUT);

    Serail.begin(9600);
}
      void loop(){

    if(Serial.available()>0){

  string value=Serial.readStringUntil('\n');

   if(value=="ON"||value=="on"||value=="H"||value=="h"){
 
  digitalWrite(ledpin,HiGH);

}
else if(value=="OFF"||value=="off"||value=="L"||value=="l"){
 
 digitalWrite(ledpin,LOW);

};
};
}