#ifndef DECIMAL
#define DECIMAL

#include <inttypes.h>

int bin2dec(uint64_t bin);
int hex2dec(char* hex);
int oct2dec(uint64_t oct);
int base2dec(char* num, int base);
int dec2bin(uint64_t dec, char* result, int size);

#endif