#include <stdio.h>
#include "getaline.h"
#include "mystrcmp.h"
#include "isdigits.h"
#include "myatoi.h"
#include "average.h"

#define MAX    100
#define DIGTS  1
#define  LIMIT  100


int main(){
   char line[MAX];
   int numbers[LIMIT];
   int idx = 0;

   while(1){

        printf("Enter a Number (or 'quit'): ");

        /* Get a line */
        getaline(line);

        /* string compare between 2 strings */
        if (mystrcmp(line , "quit") == 0){
            break;
        }
        /*check if the line characters are all digits */
        if  (isdigits(line) == DIGTS){
           numbers[idx++] = myatoi(line);
           if(idx == LIMIT){
            printf("ARRAY FULL!\n");
            break;
           }
        }else {
           printf("%s is not all digits.\n",line);
        }
    }
    /*Calculate average */
    if (idx){

  printf("%.2f.\n", average(numbers , idx));
    }

    return 0;
}
