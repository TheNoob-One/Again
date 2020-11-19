#include<stdio.h>

/* strlen : returns length of string */

int strlen(char s[]){
    int i = 0;
    while (s[i] != '\0')
        i = i+1;
    return i ;
}