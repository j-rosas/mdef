/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
   delay(100); // give me time to bring up serial monitor
  

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input 
  int sensorValue = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A4);
  int sensorValue5 = analogRead(A5);



Serial.println(sensorValue);
Serial.print(" ");

Serial.print(sensorValue1);
Serial.print(" ");

Serial.print(sensorValue2);
Serial.print(" ");

Serial.print(sensorValue3);
Serial.print(" ");

Serial.print(sensorValue4);
Serial.print(" ");

Serial.print(sensorValue5);
Serial.print(" ");

delay(1);        // delay in between reads for stability
}
