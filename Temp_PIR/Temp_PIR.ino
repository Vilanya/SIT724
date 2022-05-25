byte sensorPin = 2;
byte indicator = 13;
int tempPin = 1;
int humidpin = 0;
int val;
int val2;
byte state;
// test values only
//float temp_low = 23.0;
//float temp_high = 26.0;

float prev_temp = 0.0;
float prev_humid = 0.0;
//float humid_low = 200.0;
//float humid_high = 600.0;
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
  state = digitalRead(sensorPin);
  val = analogRead(tempPin);
  val2 = analogRead(humidpin);   

  //change led based on presence of human
  digitalWrite(indicator,state);

  float mv = ( val/1024.0)*5000;
  float temp_cel = mv/10;

//  Serial.print("Temp = ");
//  Serial.print(temp_cel);
//  Serial.print("*C");
//  Serial.println();

 t=t+1;
 Serial.print(t);
 Serial.print(" ");
 Serial.print(temp_cel);
 Serial.print(" "); // a space ' ' or  tab '\t' character is printed between the two values.
 Serial.println(val2);
// Serial.print(" "); // a space ' ' or  tab '\t' character is printed between the two values.
// Serial.print(y3);
// Serial.print(" "); // a space ' ' or  tab '\t' character is printed between the two values.
// Serial.println(y4);

  // steam sensor readings
//  Serial.print("Humid = ");
//  Serial.println(val2);

  // if human presence is detected and the temperature is within the threshold
//  if(state == 1){
//    if ((temp_cel > temp_low) && (temp_cel < temp_high)){
////      if ((val2 > humid_low) && (val2 < humid_high)){
//        Serial.println("The mask is in use");
//        //start timer now
       
 
  delay(1000);
 
}
