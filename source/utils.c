#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char getBit(int bitID, void* chunk){
    // printf("%d : %p : %c\n", bitID, chunk, *((char*)chunk));
    //printf("%d", ((unsigned char*)chunk)[bitID/8]>>(7-bitID%8)&0x01);
    //./printf(".%d ", ((unsigned char*)chunk)[bitID/8] & (1<<(7-bitID%8)));
    //printf("%d", ((unsigned char*)chunk)[bitID/8]);
    //printf("%d", bitID/8);
    return (((unsigned char*)chunk)[bitID/8]>>(7-bitID%8)&0x01);
}

int temp(){return 10;}

char* getBitString(void* num, int sizeBytes){
    char* returnStr = malloc(sizeBytes*8+1);
    for (int bit=0; bit<sizeBytes*8; bit++){
        returnStr[bit] = getBit(bit, num) + 48;
        printf("(%d %d) ", bit, getBit(bit, num));

    }

    returnStr[sizeBytes*8]='\0';
    printf("\n");
    //printf("%d\n", getBit(4, num));
    return returnStr;
}



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