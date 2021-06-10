#include <ESP8266WiFi.h>
//#include <Wire.h> //Added i2c
#include "WiFiUdp.h"

#include "config.h"  // Sustituir con datos de tu red
#include "UDP.hpp"
#include "ESP8266_Utils.hpp"
#include "ESP8266_Utils_UDP.hpp"
//#include "i2c_config.hpp"

String payload; //Added i2c
bool flag=false;

void setup() 
{
  //Wire.pins(0,2);
  //Wire.begin(0x3);    //Added i2c
  //Wire.onReceive(receiveEvent); //Added i2c
  
	Serial.begin(9600);//115200
 
	//ConnectWiFi_STA();
  ConnectWiFi_AP();
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
	//Serial.print(payload);
  /*if (flag==1 && payload){
    SendUDP_Packet(payload);
    flag=0;
  }*/
  SendUDP_Packet(payload);
  //flag=false;
  GetUDP_Packet();
  //delay(50);
}

/*void serialEvent(){
  payload= Serial.readString();
  //flag=true;
  /*Serial.write("Payload: ");
  Serial.print(payload);
  Serial.println();
  //SendUDP_Packet(payload);
}*/
