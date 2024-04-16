#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter a character to be checked: ");
    scanf(" %c",&c);
    if(!isalpha(c)){
    printf("This is not an alphabetical character");
    }
    else{
        printf("It is an alphabet character");
    }
    return 0;
}