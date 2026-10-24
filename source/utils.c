#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int getBit(int bitID, void* chunk){
    // printf("%d : %p : %c\n", bitID, chunk, *((char*)chunk));

    return *((char*)chunk) & (1<<bitID);
}

int temp(){return 10;}

char* getBitStringChar(unsigned char num){
    char* returnstr = malloc(9);
    //printf("emotional Support\n");
    for(int bit=0;bit<(sizeof(unsigned char) * 8); bit++)
    {
        returnstr[sizeof(unsigned char) * 8 - 1 -bit]=(num & 0x01) + 48;
        num = num >> 1;
    }
    returnstr[sizeof(unsigned char) * 8]='\0';
    //printf("%c\n", returnstr[1]);
    return returnstr;
}

char* getBitStringInt(unsigned int num){
    char* returnstr = malloc(sizeof(unsigned int) * 8);
    //printf("emotional Support\n");
    for(int bit=0;bit<(sizeof(unsigned int) * 8); bit++)
    {
        returnstr[sizeof(unsigned int) * 8 -1 -bit]=(num & 0x01) + 48;
        //returnstr[31-bit]+=48;
        num = num >> 1;
    }
    returnstr[sizeof(unsigned int) * 8]='\0';
    //printf("%d\n", returnstr[1]);
    return returnstr;
}