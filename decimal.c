#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include <string.h>
#include "decimal.h"

int bin2dec(uint64_t bin) {
    int dec = 0, i = 0, digit;
    uint64_t temp = bin;

    while(temp != 0) {
        digit = temp % 10;
        dec += digit<<i;
        temp = temp / 10;
        i++;
    }
    return dec;
}