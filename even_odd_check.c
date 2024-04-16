#include <stdio.h>
int main()
{
    int i;
    printf("Enter an intenger to check if its odd or even: ");
    scanf("%d", &i);
    if (i % 2 == 0)
    printf("The number you entered is even.");
    else
    printf("The number you entered is odd.");
    return 0;

}