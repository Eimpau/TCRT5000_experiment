int sensor_value_pt;
int sensor_value_led;
float voltage_pt;
float voltage_led;
float current_pt;
float current_led;

void setup() 
{
Serial.begin(9600);  
}

void loop() 
{
  sensor_value_pt = analogRead(A3); 

  voltage_pt = sensor_value_pt * (5.0 / 1023.0);
  Serial.print("Phototransistor Voltage: ");
  Serial.print(voltage_pt);
  Serial.print("V");
  Serial.println();
  
  current_pt = ((5.0 - voltage_pt) / 15000) * 1000;
  Serial.print("Phototransistor Current: ");
  Serial.print(current_pt,3);
  Serial.print("mA"); 
  Serial.println();

  delay(1);

  sensor_value_led = analogRead(A2);

  voltage_led = sensor_value_led * (5.0 / 1023);
  Serial.print("LED Voltage: ");
  Serial.print(voltage_led);
  Serial.print("V");
  Serial.println();
  

  current_led = ((5.0 - voltage_led) / 170) * 1000;
  Serial.print("Led Current: ");
  Serial.print(current_led, 3);
  Serial.print("mA");
  Serial.println();

  Serial.println("--------------------");

  delay(1000);
}     
