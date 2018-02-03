#include <stdio.h>
#include <stdlib.h>


  /*calculating word size */
int Wordsize (void){

   /* size will be all ones  */
    unsigned int x = ~0;
    int size = 0;

    /* Keep doing this x is all zero  */
    while(x != 0){
        size++;
        x = x >> 1;
    }
    return count;
   }
