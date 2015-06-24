#ifndef Communication_H
#define Communication_H

#include <stdint.h>

void writeData(uint8_t cmd, uint16_t address);
uint8_t readData(uint8_t cmd, uint16_t address);

#endif // Communication_H
