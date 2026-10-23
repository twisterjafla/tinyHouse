#include <math.h>


int getBit(int bitID, void* chunk){
    return *((long long int*)chunk) & (1<<bitID);
}