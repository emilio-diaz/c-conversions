#include "decimal.h"
#include <stdio.h>
#include <inttypes.h>
#include <assert.h>

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
}

int main(int argc, char* argv[]) {
    tests();
    return 0;
}

