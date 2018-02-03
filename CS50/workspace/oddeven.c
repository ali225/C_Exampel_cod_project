#include<stdio.h>

int main()
{
    FILE *even, *odds;
    int n = 10;
    size_t k = 0;
    even = fopen("even.txt", "w");
    odds = fopen("odds.txt", "w");
    for(k = 1; k < n + 1; k++)
    {
      k%2==0 ? fprintf(even, "\t%zu\n", k)
             : fprintf(odds, "\t%5zu\n", k);
    }
    fclose(even);
    fclose(odds);


    return 0;
}