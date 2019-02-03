#ifndef ARDUINO_PN532_MGOS_ARDUINO_ADAFRUIT_PN532_C_H
#define ARDUINO_PN532_MGOS_ARDUINO_ADAFRUIT_PN532_C_H

#include "Adafruit_PN532.h"

#ifdef __cplusplus
extern "C" {
#endif

Adafruit_PN532 *mgos_arduino_adafruit_pn532_create(uint8_t clk, uint8_t miso, uint8_t mosi, uint8_t ss);
int mgos_arduino_adafruit_pn532_begin(Adafruit_PN532 *nfc);
int mgos_arduino_adafruit_pn532_getFirmwareVersion(Adafruit_PN532 *nfc);
bool mgos_arduino_adafruit_pn532_readPassiveTargetID(Adafruit_PN532 * nfc,
                                                     uint8_t cardbaudrate,
                                                     uint8_t * uid,
                                                     uint8_t * uidLength,
                                                     uint16_t timeout = 0);

uint8_t mgos_arduino_adafruit_pn532_ntag2xx_ReadPage(Adafruit_PN532 * nfc,
                                                     uint8_t page,
                                                     uint8_t * buffer);

uint8_t mgos_arduino_adafruit_pn532_ntag2xx_WritePage(Adafruit_PN532 * nfc,
                                                      uint8_t page,
                                                      uint8_t * data);

uint8_t mgos_arduino_adafruit_pn532_ntag2xx_WriteNDEFURI(Adafruit_PN532 * nfc,
                                                         uint8_t uriIdentifier,
                                                         char * url, uint8_t dataLen);

#ifdef __cplusplus
}
#endif

#endif //ARDUINO_PN532_MGOS_ARDUINO_ADAFRUIT_PN532_C_H
