#include <stdio.h>
int main()
{
    int i,n;
    unsigned long long int fact = 1;
    printf("Enter the number you are looking factorial for:");
    scanf("%d", &n);
    if (n<0)
    printf("Factorial of a negative number doesnt exist");
    else
    {
    for(i=1;i<=n;++i)
    {
        fact *=i;
    }
        printf("The factorial of %d is %llu", n,fact);

    }
    return 0;
}