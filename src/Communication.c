#include "Communication.h"
#include <stdint.h>
#include "Signal.h"

void sendBitHigh(int pinNo)
{
  setPinHigh(IO_PIN);
  setPinLow(CLK_PIN);
  setPinHigh(CLK_PIN);
}
void sendBitLow(int pinNo)
{
  setPinLow(IO_PIN);
  setPinHigh(CLK_PIN);
  setPinLow(CLK_PIN);
}
void turnAround(int pinNo)
{
  
}
uint32_t readBit(int pinNo)
{
  int bit = readPin(pinNo);
  return bit;
}

void writeData(uint8_t cmd, uint16_t address)
{
  
}