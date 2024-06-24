/*
    Project name : ESP32 Infrared sensor receiver module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-infrared-sensor-receiver-module
*/

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

const uint16_t RECV_PIN = 15; // Pin connected to the IR receiver module

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("IR Receiver initialized");
}

void loop() {
  if (irrecv.decode(&results)) {
    // Print the received value
    Serial.print("Received IR signal: ");
    Serial.println(resultToHexidecimal(&results));
    
    // Check the decoded value (adjust based on your remote's codes)
    if (results.value == 0xFF30CF) { // Example code for a button on the remote
      Serial.println("Button 1 pressed");
      // Add your action for button 1 here
    } else if (results.value == 0xFF18E7) { // Example code for another button
      Serial.println("Button 2 pressed");
      // Add your action for button 2 here
    }

    irrecv.resume(); // Receive the next value
  }
  delay(100);
}
