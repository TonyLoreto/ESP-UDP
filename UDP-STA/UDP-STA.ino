#include <ESP8266WiFi.h>
#include "WiFiUdp.h"
//#include <Wire.h> //Added i2c

#include "config.h"  // Sustituir con datos de tu red
#include "UDP.hpp"
#include "ESP8266_Utils.hpp"
#include "ESP8266_Utils_UDP.hpp"
//#include "i2c_config.hpp"

String payload; //Added i2c
bool flag=false;

void setup() 
{
	Serial.begin(9600);//115200
  //Wire.pins(0,2); //Added i2c
  //Wire.begin(0x3);    //Added i2c
  //Wire.onReceive(receiveEvent); //Added i2c

	ConnectWiFi_STA();
	ConnectUDP();
}

void loop() 
{
  if(Serial.available()>0)
  {
    payload= Serial.readString();
    //flag=true;
    //serialEvent();
   }
  /*if(Serial.available()>0)
  {
    payload= Serial.readString();
    //Serial.print(payload);
  }*/
  /*if (flag==1 && payload){
    SendUDP_Packet(payload);
    flag=0;
  }*/
  SendUDP_Packet(payload);
  //flag=false;
  GetUDP_Packet();
}

/*void serialEvent(){
  payload= Serial.readString();
  /*Serial.write("Payload: ");
  Serial.print(payload);
  Serial.println();
  
}*/
