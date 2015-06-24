#include "unity.h"
#include "Communication.h"
#include "mock_Signal.h"
#include <stdint.h>

void setUp(void){}
void tearDown(void){}

void test_sendBitHigh_given_xxxx_and_should_yyyy(void)
{
  setPinHigh_Expect(IO_PIN);
  setPinLow_Expect(CLK_PIN);
  setPinHigh_Expect(CLK_PIN);
  sendBitHigh(1);
}

// void test_writeData_given_0xCD_and_addr_0xDEAD_and_data_0xC0_should_sent_0xCDDEADC0()
// {
// }

// void test_readData_given_0xAB_and_addr_0xFACE_should_sent_0xABFACE_and_turnAround_and_receive_0xBE()
// { 
// }
