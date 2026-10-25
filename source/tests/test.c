#include "../everything.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned char* testChar1 = malloc(1);
    testChar1[0]=127;
    
    unsigned int* testInt1 = malloc(sizeof(int));
    testInt1[0] =  1610612735;//__INT32_MAX__;

    //printf("testChar1: %s\n", getBitStringChar(*(unsigned char*)testChar1));
    printf("testInt1: %s\n", getBitStringInt(*(unsigned int*)testInt1));
    //printf("testChar1: %s\n", getBitString(testChar1, sizeof(unsigned char)));
    printf("testInt1: %s\n", getBitString(testInt1, sizeof(unsigned int)));
    printf("%i\n", getBit(0, testInt1));
    //printf("%d\n", *testInt1);

    if (getBit(0, testChar1)==0){printf("test 1 failed\n");} else {printf("test 1 passed\n");}
    if (getBit(2, testChar1)==0){printf("test 2 failed\n");} else {printf("test 2 passed\n");}
    if (getBit(7, testChar1)==1){printf("test 3 failed\n");} else {printf("test 3 passed\n");}
    if (getBit(31, testInt1)==1){printf("test 4 failed\n");} else {printf("test 4 passed\n");}
    if (getBit(15, testInt1)==0){printf("test 5 failed\n");} else {printf("test 5 passed\n");}



    



    return 0;

}

