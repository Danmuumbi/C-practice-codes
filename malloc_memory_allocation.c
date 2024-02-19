/*Malloc is  a short form of memory allocation .it is a built in function found in the library <stdlib.h>*/
//the syntax of a memory allocation using malloc is as ptr = (castType*) malloc(size); example is ptr = (float*) malloc(100 * sizeof(float));
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,i,n,sum = 0;
    printf("Enter total  numbers to be added: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
    printf("Memory not allocated! ");
    exit(0);
    }
        printf("my numbers to be added are:\n");
        for(i=0;i<n;++i)
        {
        scanf("%d",ptr+i);
        sum += *(ptr+i);
        }
    printf("sum = %d", sum);
    free(ptr);
    return 0;
}