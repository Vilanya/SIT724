int tempPin = 1;
int humidpin = 0;

int val;
int val2;

float prev_temp = 0.0;
float prev_humid = 0.0;
int t = 0;

void setup()
{
  pinMode(sensorPin,INPUT);
  pinMode(indicator,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //read sensor data
  val = analogRead(tempPin);
  val2 = analogRead(humidpin);   

  float mv = ( val/1024.0)*5000;
  float temp_cel = mv/10;

//  BetterSerialPlotter output format
 t=t+1;
 Serial.print(t);
 Serial.print(" ");
 Serial.print(temp_cel);
 Serial.print(" "); 
 Serial.println(val2);
       
 
  delay(1000);
 
}
