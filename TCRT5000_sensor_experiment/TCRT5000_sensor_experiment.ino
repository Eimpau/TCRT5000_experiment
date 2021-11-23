int a;
void setup() // Arduino init
{
Serial.begin(9600); //serial bitrate
pinMode(6,OUTPUT); // Pin 6 used as output
}
void loop() // Loop
{  digitalWrite(6,HIGH); 
delayMicroseconds(500); // 500 micro-seconds delay
a=analogRead(A3); // Read pin for the sensor
Serial.println(a); }    // Print value from sensor to serial mnitor
