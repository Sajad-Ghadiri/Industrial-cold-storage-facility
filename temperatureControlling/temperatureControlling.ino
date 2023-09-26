int val;
int tempPin = 1;
int setpoint = 10;
int cooler=2;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  val = analogRead(tempPin);
  float mv = ( val/1024.0)*5000;
  float cel = mv/10;
  float farh = (cel*9)/5 + 32;
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);
//get temperature in farenhite
Serial.print("TEMPRATURE = ");
Serial.print(farh);
Serial.print("*F");
Serial.println();

//controlling
if(cel>setpoint+1.5){
  digitalWrite(cooler,1);
  
}
elseif(cel<setpoint-1.5){
  digitalWrite(cooler,0);
}
}
