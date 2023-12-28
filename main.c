#include "decimal.h"
#include "arrayops.h"
#include <stdio.h>
#include <inttypes.h>
#include <assert.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

static void tests() {
    //bin2dec tests
    assert(bin2dec(1) == 1);
    assert(bin2dec(10) == 2);
    assert(bin2dec(100) == 4);
    assert(bin2dec(1000) == 8);
    assert(bin2dec(10000) == 16);
    assert(bin2dec(10101) == 21);
    printf("bin2dec: All tests have passed!\n");

    //hex2dec tests
    assert(hex2dec("a") == 10);
    assert(hex2dec("ab") == 171);
    assert(hex2dec("12") == 18);
    assert(hex2dec("2Be") == 702);
    printf("hex2dec: All tests have passed!\n");

    //oct2dec tests
    assert(oct2dec(1) == 1);
    assert(oct2dec(12) == 10);
    assert(oct2dec(102) == 66);
    assert(oct2dec(1234567) == 342391);
    printf("oct2dec: All tests have passed!\n");

    //base2dec tests
    assert(base2dec("10",2) == 2);
    assert(base2dec("12",8) == 10);
    assert(base2dec("aB9",16) == 2745);
    printf("base2dec: All tests have passed!\n");

    //dec2bin tests
    int size = 3;
    char t1[size];
    dec2bin(4,t1,size);
    char temp1[] = {1,0,0};
    reverse(t1,size);
    for(int i=0; i<size; i++){
        printf("%d: %d\n", t1[i], temp1[i]);
        assert(t1[i] == temp1[i]);
    }

    size = 8;
    char t2[size];
    dec2bin(37,t2,size);
    char temp2[] = {0,0,1,0,0,1,0,1};
    reverse(t2,size);
    for(int i=0; i<size; i++){
        assert(t2[i] == temp2[i]);
    }

    size = 16;
    char t3[size];
    dec2bin(1023,t3,size);
    char temp3[] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    reverse(t3,size);
    for(int i=0; i<size; i++){
        assert(t3[i] == temp3[i]);
    }
    printf("dec2bin: All tests have passed!\n");
    printf("\n");
}

int main(int argc, char* argv[]) {
    tests();
    return 0;
}

