#include <mgos_arduino_adafruit_pn532.h>

Adafruit_PN532 *mgos_arduino_adafruit_pn532_create(uint8_t clk, uint8_t miso, uint8_t mosi, uint8_t ss) {
    return new Adafruit_PN532(clk, miso, mosi, ss);
}

int mgos_arduino_adafruit_pn532_begin(Adafruit_PN532 *htu) {
    if (htu == nullptr) return 0;
    htu->begin();
    return 1;
}


int mgos_arduino_adafruit_pn532_getFirmwareVersion(Adafruit_PN532 *htu) {
  int response = -1;

  if (htu != nullptr) {
    response = (int) htu->getFirmwareVersion();
  }

  return response;
}
