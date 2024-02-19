#include <stdio.h>
int main()
{
    int a,b,i,n;
    int result;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("%d %d ", a,b);
    for(i=2;i<n;++i){
        result = a + b;
    printf("%d ", result);
    a = b;
    b = result;
    }

    return 0;
}