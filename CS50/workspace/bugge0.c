#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 1 ; i <= 10 ; i ++)
    {
        printf("#\n");
        eprintf("i is now %i\n",i);
    }
}