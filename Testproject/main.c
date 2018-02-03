#include <stdio.h>
#include <stdlib.h>

void print_sequence(unsigned int start , unsigned int end);


void find_sequence(unsigned int x);

int main()
{
    find_sequence(10000);
    return 0;
}
void print_sequence(unsigned int start , unsigned int end){
 unsigned int i;

printf(">> start of Sequence: \n");

for(i= start ; i <= end ; i++){
    printf("%d ", i );
}


printf(">>End of Sequence: \n ");

}
void find_sequence(unsigned int x){
unsigned int sum;
unsigned int i , j;

for (i =0 ; i <= x ; i ++){
    sum = 0 ;
    for (j= i ; j <= x; j++){
        sum+= j;
        if (sum == x ){
            print_sequence(i,j);
            break;
        }
        if (sum > x){
            break;
         }
      }
   }

}
