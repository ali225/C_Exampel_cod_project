#include <stdio.h>
#include "getaline.h"


void getaline(char line[]){
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        line[i++] = c;
    }
    line[i] = '\0';

}
