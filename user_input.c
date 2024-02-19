/*A key word scanf found in the standard library is used to get user input*/
#include <stdio.h>

int main()
{
    int age;/*declaring the variable the variable*/
    printf("Your age is: ");
    scanf("%d", &age);/*Taking user input*/
    printf("\nYou entered %d\n", age);
    
    return 0;
}