#ifndef Signal_H
#define Signal_H

#define   IO_PIN    4
#define   CLK_PIN   9

void setPinHigh(int pinNo);
void setPinLow(int pinNo);
int readPin(int pinNo);
void setPinToOutput(int pinNo);
void setPinToInput(int pinNo);

#endif // Signal_H
