//for testing purposes, hours is translated to minutes. 8 hours will be represented by 8 minutes

//N95 -> 8 minutes


int tempPin = 1;
int humidPin = 0;
int indicator = 13;

int temp = 0;
int humid = 0;
float sum = 0;
float prev = 0.0;
float next = 0.0;
boolean state = false;
float diff = 0.0;
int t = 0;
int counter=0;


int x = 10;

void setup()
{
pinMode(tempPin,INPUT);
//pinMode(humidPin,INPUT);
pinMode(indicator,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //read sensor data
//  temp = analogRead(tempPin);
////  humid = analogRead(humidPin);   
//
//  float mv = ( temp/1024.0)*5000;
//  float temp_cel = mv/10;
/*
 for (int i = 0; i < x; i++)
{
  humid = analogRead(humidPin);
  
 Serial.println(humid);
  sum = sum + humid;   //Sum for averaging
  
  delay(1000);     
}

prev = sum/x;
sum=0;
for (int i = 0; i < x; i++)
{
  humid = analogRead(humidPin);
  
 Serial.println(humid);
  sum = sum + humid;   //Sum for averaging
  delay(1000);     
}

next = sum/x;

if (prev>next){ 
    diff = prev-next;
  }
 else {
  diff = next-prev;
 }

if (state==false){
  
  if (diff > 10) {
    Serial.println("Is the mask on?");
    state=true;
  }
}
else{
  if (diff <= 5) {
    Serial.println("Is the mask off?");
    state=false;
}}*/


 for (int i = 0; i < x; i++)
{
  temp = analogRead(tempPin);
  float mv = ( temp/1024.0)*5000;
  float temp = mv/10;
  
 Serial.println(temp);
  sum = sum + temp;   //Sum for averaging
  
  delay(1000);     
}

prev = sum/x;
sum=0;
for (int i = 0; i < x; i++)
{
  temp = analogRead(tempPin);
  float mv = ( temp/1024.0)*5000;
  float temp = mv/10;
  
 Serial.println(temp);
  sum = sum + temp;   //Sum for averaging
  delay(1000);     
}

next = sum/x;

if (prev>next){ 
    diff = prev-next;
  }
 else {
  diff = next-prev;
 }

if (state==false){
  
  if (diff > 1.5) {
    Serial.println("Is the mask on?");
    state=true;
  }
}
else{
  if (diff <= 1) {
    Serial.println("Is the mask off?");
    state=false;
}}

//
////  BetterSerialPlotter output format
// Serial.print(t);
//// Serial.print(" ");
//// Serial.print(temp_cel);
// Serial.print(" "); 
// Serial.println(humid);
 
 delay(1000);
//t++;




 
 
}
