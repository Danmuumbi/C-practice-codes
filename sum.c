#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter 2 numbers:");
    scanf("%d %d", &num1,&num2);
    {
    sum = num1+num2;
    printf("\nThe sum of %d and %d is:%d ",num1,num2,sum);
    }
    return 0;

}