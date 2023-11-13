#include <18F57Q84.h>
#device ADC=12

#FUSES NOWDT                    //No Watch Dog Timer

#device ICD=TRUE
#use delay(internal=64MHz)


// Supposed to be provided by stdint.h, hardware specific
// required for eCLI.

#ifndef UINTPTR_MAX
#define UINTPTR_MAX 0xFFFF
#endif
