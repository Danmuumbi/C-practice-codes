#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,sum=0,n,*ptr;
    printf("Enter the elements to be added:");
    scanf("%d", &n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr==NULL){
    printf("\nUnsuccessful memory allocation!\n");
    }
    else{
        printf("Memmory successfully allocated.\n");
        for(i=0;i<n;++i)
        {
            ptr[i]=i+1;
        }
        printf("The elements are:\n");
        for(i=0;i<n;++i)
        {
            printf("%d ,",ptr[i]);
            sum += ptr[i];
        }
        printf("\nThe sum of my values is %d",sum);
            }
    return 0;
}