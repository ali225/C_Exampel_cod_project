#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string();
    for (int i = 0 ; i < strlen(s); i ++)
    {
        printf("%c\n",s[i]);

    }
}