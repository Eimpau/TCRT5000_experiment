int sensor_value_pt;
int sensor_value_led;
float voltage_pt;
float voltage_led;
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
Serial.println(voltage_pt);

delay(1);

sensor_value_led = analogRead(A2);
voltage_led = sensor_value_led * (5.0 / 1023);
Serial.print("LED Voltage: ");
Serial.println(voltage_led);
current_led = voltage_led / 100;
Serial.println(current_led);

Serial.println();

delay(500);
}     
