int analogPin0 = A0;  // Vout
int analogPin1 = A1;  // Vin

int Vin = 0;
int Vout = 0;
void setup() {
  Serial.begin(9600);

 // Pouya Aminaie
 // Linear Control Lab
  
  Vout = analogRead(analogPin0);
 Vin = analogRead(analogPin1);

      Serial.print(Vout);      
  Serial.print(",");             
 Serial.println(Vin);

    
}

void loop() {
  
  Vout = analogRead(analogPin0);
 Vin = analogRead(analogPin1);

      Serial.print(Vout);      
  Serial.print(",");             
 Serial.println(Vin);

}
