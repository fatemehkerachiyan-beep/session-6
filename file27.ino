const int lm35Pin = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(lm35Pin);    
float voltage = sensorValue * (5.0 / 1023.0); 
float temperatureC = voltage * 100; 
Serial.print("Temperature: "); 
Serial.print(temperatureC); 
Serial.println(" °C");  
delay(1000);
}
