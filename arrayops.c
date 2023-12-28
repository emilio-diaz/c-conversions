#include <stdio.h>
#include "arrayops.h"

#define DEBUG 0

int reverse(char* arr, int size){
    char temp;
    int start = 0;
    int end = (size-1);

    if(size < 1){
        perror("Invalid array size...\n");
        return -1;
    }
    else if(size == 1){
        perror("No need to reverse this array of length 1...\n");
        return -2;
    }

    if(DEBUG){
        printf("\n");
        printf("Normal array -> ");
        for(int i=0; i<size; i++){
            printf("%d", arr[i]);
        }
        printf("\n");
    }

    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    if(DEBUG){
        printf("\n");
        printf("Reversed array -> ");
        for(int i=0; i<size; i++){
            printf("%d", arr[i]);
        }
        printf("\n");
    }

    return 0;
}