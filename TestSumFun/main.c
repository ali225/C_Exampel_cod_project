#include <stdio.h>

int sum (int, int); /* prototype */

 main(){
     int a, b, c;

     printf("Invoking sum.\n");
     a = sum (b, c); /* Invocation */

     printf("%d is the sum of %d and %d", a, b, c);
}
int sum(int first, int second){ /* Definition */
     return(first, second);
}
