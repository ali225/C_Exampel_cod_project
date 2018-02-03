#include <stdio.h>
#include "mystrcmp.h"

int mystrcmp(char s[] , char t[]){
    int is_quit = 1;
    int i = 0 ;

    while(s[i] == t[i]){
         if (s[i++] == '\0'){
            is_quit = 0;
            break;
         }
    }
    return is_quit;
}
