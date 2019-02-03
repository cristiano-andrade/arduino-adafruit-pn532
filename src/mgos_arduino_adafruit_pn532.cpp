#include <mgos_arduino_adafruit_pn532.h>

Adafruit_PN532 *mgos_arduino_adafruit_pn532_create(uint8_t clk, uint8_t miso, uint8_t mosi, uint8_t ss) {
    return new Adafruit_PN532(clk, miso, mosi, ss);
}

int mgos_arduino_adafruit_pn532_begin(Adafruit_PN532 * nfc) {
    if (nfc == nullptr) return 0;
    nfc->begin();
    return 1;
}


int mgos_arduino_adafruit_pn532_getFirmwareVersion(Adafruit_PN532 * nfc) {
  int response = -1;

  if (nfc != nullptr) {
    response = (int) nfc->getFirmwareVersion();
  }

  return response;
}

bool mgos_arduino_adafruit_pn532_readPassiveTargetID(Adafruit_PN532 * nfc,
                                                     uint8_t cardbaudrate,
                                                     uint8_t * uid,
                                                     uint8_t * uidLength,
                                                     uint16_t timeout) {
  bool success = false;

  if(nfc != nullptr) {
    success = nfc->readPassiveTargetID(cardbaudrate, uid, uidLength, timeout);
  }

  return success;
}

uint8_t mgos_arduino_adafruit_pn532_ntag2xx_ReadPage(Adafruit_PN532 * nfc,
                                                     uint8_t page,
                                                     uint8_t * buffer) {

   uint8_t response = 0;

   if(nfc != nullptr) {
     response = nfc->ntag2xx_ReadPage(page,buffer);
   }

   return response;

}

uint8_t mgos_arduino_adafruit_pn532_ntag2xx_WritePage(Adafruit_PN532 * nfc,
                                                      uint8_t page,
                                                      uint8_t * data) {
  uint8_t response = 0;

  if(nfc != nullptr) {
    response = nfc->ntag2xx_WritePage(page,data);
  }

  return response;
}


uint8_t mgos_arduino_adafruit_pn532_ntag2xx_WriteNDEFURI(Adafruit_PN532 * nfc,
                                                         uint8_t uriIdentifier,
                                                         char * url, uint8_t dataLen) {
   uint8_t response = 0;

   if(nfc != nullptr) {
     response = nfc->ntag2xx_WriteNDEFURI(uriIdentifier,url,dataLen);
   }

   return response;
}

bool mgos_arduino_adafruit_pn532_SAMConfig(Adafruit_PN532 *nfc) {
  bool success = false;

  if (nfc != nullptr) {
    success =  nfc->SAMConfig();
  }

  return success;
}
