#include "myatoi.h"

int myatoi(char line[]){
    int i = 0;
    int number = 0;

    while ((line[i] >= '0') && (line[i] <= '9')){
        number = 10 * number + line[i++] - '0';
    }
    return number;
}

