#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,*ptr,substraction=0;
    printf("The number of elements to be substracted are:");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not allocated!");
        exit(0);
    }
    printf("The elements to be substracted are:");
    for(i=0;i<n;++i)
    scanf("%d", ptr + i);
    for(i=0;i<n;++i)
    substraction -= *(ptr+i);
    printf("The result is: %d", substraction);
    free(ptr);
    return 0;
}