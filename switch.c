#include <stdio.h>
int main()
{
    char operation;
    int a,b;
    printf("Enter the operation to use:");
    scanf("%c",&operation);
    if(operation != '+' && operation != '-' && operation != '*' && operation != '/')
    printf("Examine the operator you have entered.");
    else{
    printf("Enter two  operands:\n");
    scanf("%d %d",&a,&b);
    switch (operation)
    {
    case'+':
    printf("Addition of %d and %d is %d",a,b,a+b);
        break;
        case'-':
        printf("Difference of %d and %d is %d",a,b,a-b);
        break;
        case'*':
        printf("Multiplyying %d and %d you get %d",a,b,a*b);
        break;
    default:
    printf("Invalid operator!");
        break;
    }
    }
    return 0;
}