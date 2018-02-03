#include <stdio.h>
#include "isdigits.h"

int isdigits(char line []){
     int i;
     int is_digits = DIGTS;
     for (i = 0 ; line[i] != '\0'; i++ ){
        if ((line[i] < '0') || (line[i] > '9')){
            is_digits = ! DIGTS;
        }
     }
     return is_digits;
}
