
#include <SPI.h>
#include <LoRa.h>

void setup() 
{
  Serial.begin(9600);
  LoRa.begin(433E6);
}

void loop() {
  int packetSize = LoRa.parsePacket();
  if (LoRa.parsePacket()) {

    // read packet
    while (LoRa.available()) {
      Serial.print((char)LoRa.read());
    }

  }
}
