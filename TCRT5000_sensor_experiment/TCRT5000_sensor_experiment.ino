void setup() // Arduino init
{
Serial.begin(9600); //serial bitrate
pinMode(6,OUTPUT); // Pin 6 used as output
}
void loop() // Loop
{  digitalWrite(6,HIGH); 
delayMicroseconds(500); // 500 micro-seconds delay
int a=analogRead(A3); // Read pin for the sensor
float voltage_1 = a * (5/1023)
Serial.println(voltage_1"V"); }    // Print value from sensor to serial mnitor
