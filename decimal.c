#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
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

int hex2dec(char* hex) {
    int dec, val, len;

    dec = 0;

    len = strlen(hex);
    len--;

    for(int i = 0; hex[i] != '\0'; i++) {
        if(hex[i] >= '0' && hex[i] <= '9')
            val = hex[i] - 48;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            val = hex[i] - 97 + 10;
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            val = hex[i] - 65 + 10;

        dec += val * pow(16, len);
        len--;
    }

    return dec;
}

int oct2dec(uint64_t oct) {
    int dec = 0, digit, i = 0;

    while(oct != 0) {
        digit = oct % 10;
        dec += digit * pow(8, i);
        oct = oct / 10;
        i++;
    }
    return dec;
}

int base2dec(char* num, int base) {
    int dec = 0, val = 0, i;

    for(i = 0; num[i] != '\0'; i++) {
        if(isdigit(num[i])) {
            val = num[i] - '0';
        }
        else if(isupper(num[i])) {
            val = num[i] - 'A' + 10;
        }
        else if(islower(num[i])) {
            val = num[i] - 'a' + 10;
        }
        else {
            val = base + 1;
        }

        if(val >= base) {
            printf("Invalid Number...\n");
            return 0;
        }

        dec *= base;
        dec += val;
    }

    return dec;
}