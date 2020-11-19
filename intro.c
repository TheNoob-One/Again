#include<stdio.h>

int main() {   
    char c;
    printf("Enter a Character :");

    scanf("%c", &c);
    // %d displays the int value 
    // %c displays the char value

    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}