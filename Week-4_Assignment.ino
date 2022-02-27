/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

int led = 13;

// the setup routine runs once when you press reset
void setup() 
{  
// initialize the digital pin as an output.  
	pinMode(led, OUTPUT);  
	Serial.begin(9600);
}
int state = 0;
void loop() 
{  
	if(Serial.available() > 0)  // Checks whether data is comming from the serial port  
	{                         
		state = Serial.read();  // Reads the data from the serial port  
	}  
	if (state == '0')  
	{  
        digitalWrite(led, LOW); // Turn LED OFF 
	} 
    if (state == '1')  
	{  
        digitalWrite(led, HIGH); // Turn LED ON
	}
}