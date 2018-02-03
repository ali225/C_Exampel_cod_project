#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is ");
    int x = get_int();

    printf("y is ");
    int y = get_int();

    int z = x + y ;

    printf("sum of x and y : %i \n", z );

}