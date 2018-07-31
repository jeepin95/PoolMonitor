/*
 * Project PoolMonitor
 * Description: Monitors pool temperature and controls 12V pump for pool heater
 * Author: Jeepin95
 * Date: 7/30/2018
 */

#define ONE_WIRE_BUS 5
#define PUMP_PIN 6

#define VERSION 0.9
#define PRECISION 5


// setup() runs once, when the device is first turned on.
void setup() {
  // Set the mode to output for the relay controlling the pump
  pinMode(PUMP_PIN,OUPUT);
  // Turn the pump off by default
  digitalWrite(PUMP_PIN,LOW);

  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}
