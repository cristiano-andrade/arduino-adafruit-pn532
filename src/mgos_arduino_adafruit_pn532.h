#ifndef ARDUINO_PN532_MGOS_ARDUINO_ADAFRUIT_PN532_C_H
#define ARDUINO_PN532_MGOS_ARDUINO_ADAFRUIT_PN532_C_H

#include "Adafruit_PN532.h"

#ifdef __cplusplus
extern "C" {
#endif

Adafruit_PN532 *mgos_arduino_adafruit_pn532_create(uint8_t clk, uint8_t miso, uint8_t mosi, uint8_t ss);
int mgos_arduino_adafruit_pn532_begin(Adafruit_PN532 *htu);
int mgos_arduino_adafruit_pn532_getFirmwareVersion(Adafruit_PN532 *htu);

#ifdef __cplusplus
}
#endif

#endif //ARDUINO_ADAFRUIT_HTUD1DF_MGOS_ARDUINO_ADAFRUIT_HTU21D_C_H
