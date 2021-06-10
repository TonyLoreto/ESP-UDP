//  UDP variables
WiFiUDP UDP;

unsigned int localPort = 8889;//Intercambio de comms
unsigned int remotePort = 8888;//Intercambio de comms
char packetBuffer[UDP_TX_PACKET_MAX_SIZE]; //buffer to hold incoming packet,

void ProcessPacket(String response)
{
   Serial.println(response);
}
