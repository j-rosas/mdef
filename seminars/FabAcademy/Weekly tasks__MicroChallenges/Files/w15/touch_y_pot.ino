// ESP32 Touch Pins


void setup()
{
  Serial.begin(9600);
  delay(100); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
  
  
}

void loop()
{
  int sensorValue = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A4);
  int sensorValue5 = analogRead(A5);
  
  int Touch1 = touchRead(T4);
  int Touch2 = touchRead(T5);
  int Touch3 = touchRead(T7);
  int Touch4 = touchRead(T8);
  int Touch5 = touchRead(T3);
  int Touch6 = touchRead(T9);
  int Touch7 = touchRead(T6);
  int Touch8 = touchRead(T0);


sensorValue = map(sensorValue,0,4095,0,100);
Serial.print(sensorValue);
Serial.print(" ");

sensorValue1 = map(sensorValue1,0,4095,0,100);
Serial.print(sensorValue1);
Serial.print(" ");

sensorValue2 = map(sensorValue2,0,4095,0,100);
Serial.print(sensorValue2);
Serial.print(" ");

sensorValue3 = map(sensorValue3,0,4095,0,100);
Serial.print(sensorValue3);
Serial.print(" ");

sensorValue4 = map(sensorValue4,0,4095,0,100);
Serial.print(sensorValue4);
Serial.print(" ");

sensorValue5 = map(sensorValue5,0,4095,0,100);
Serial.print(sensorValue5);
Serial.print(" ");

  Touch2 = 100 - Touch2;//(Touch2 + 60);
Touch2 -= 80;
if (Touch2 <= 0)
{
  Touch2 = 0;
}
  Touch2 = map(Touch2,0,20,0,100);
  Serial.print(Touch2);
  Serial.print(" ");

Touch3 = 100 - Touch3;//(Touch3 + 60);
Touch3 -= 80;
if (Touch3 <= 0)
{
  Touch3 = 0;
}
  Touch3 = map(Touch3,0,20,0,100);
  Serial.print(Touch3);
  Serial.print(" ");

Touch4 = 100 - Touch4;//(Touch4 + 60);
Touch4 -= 80;
if (Touch4 <= 0)
{
  Touch4 = 0;
}
  Touch4 = map(Touch4,0,20,0,100);
  Serial.print(Touch4);
  Serial.print(" ");

  Touch5 = 100 - Touch5;//(Touch5 + 60);
Touch5 -= 80;
if (Touch5 <= 0)
{
  Touch5 = 0;
}
  Touch5 = map(Touch5,0,20,0,100);
  Serial.print(Touch5);
  Serial.print(" ");

   Touch6 = 100 - Touch6;//(Touch6 + 60);
Touch6 -= 80;
if (Touch6 <= 0)
{
  Touch6 = 0;
}
  Touch6 = map(Touch6,0,20,0,100);
  Serial.print(Touch6);
  Serial.print(" ");

   Touch7 = 100 - Touch7;//(Touch7 + 60);
Touch7 -= 80;
if (Touch7 <= 0)
{
  Touch7 = 0;
}
  Touch7 = map(Touch7,0,20,0,100);
  Serial.print(Touch7);
  Serial.print(" ");

//  Touch8 = 100 - Touch8;//(Touch8 + 60);
//Touch8 -= 80;
//if (Touch8 <= 0)
//{
//  Touch8 = 0;
//}
//  Touch8 = map(Touch8,0,20,0,100);
//  Serial.print(Touch8);
//  Serial.print(" ");
  
//  Touch2 = map(Touch2,0,100,100,0);
//  Serial.print(Touch2);
//  Serial.print(" ");
//  to3 = (Touch3 - 60);
//  Touch3 = map(Touch3,0,100,100,0);
//  Serial.print(to3);
//  Serial.print(" ");
//  Touch4 = map(Touch4,0,100,100,0);
//  Serial.print(Touch4);
//  Serial.print(" ");
//   Touch5 = map(Touch5,0,100,100,0);
//  Serial.print(Touch5);
//  Serial.print(" ");
//   Touch6 = map(Touch6,0,100,100,0);
//  Serial.print(Touch6);
//  Serial.print(" ");
//   Touch7 = map(Touch7,0,100,100,0);
//  Serial.print(Touch7);
//  Serial.print(" ");
//     Touch8 = map(Touch8,0,100,100,0);
//  Serial.print(Touch8);
//  Serial.print(" ");
//
////  

  Serial.println();
  delay(100);

//


 
  }
