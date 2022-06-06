int tempPin = 1;
int humidPin = 0;

int temp = 0;
int humid = 0;

float prev_temp = 0.0;
float prev_humid = 0.0;
int t = 0;

void setup()
{
pinMode(tempPin,INPUT);
pinMode(humidPin,INPUT);
//  pinMode(indicator,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //read sensor data
  temp = analogRead(tempPin);
  humid = analogRead(humidPin);   

  float mv = ( temp/1024.0)*5000;
  float temp_cel = mv/10;

//  BetterSerialPlotter output format

 Serial.print(t);
 Serial.print(" ");
 Serial.print(temp_cel);
 Serial.print(" "); 
 Serial.println(humid);
 delay(1000);
 t=t+1;
 
}
