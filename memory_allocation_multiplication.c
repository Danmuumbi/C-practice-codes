#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr,i,n,multiplication=1;
    printf("The number of elements to be multiplied are: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("\nError!Memory not allocated\n");
        exit(0);
    }
        printf("The elements to be multiplied are:\n");
        for(i=0;i<n;++i)
        scanf("%d", ptr + i);

        for(i=0;i<n;++i)
        multiplication *= *(ptr+i);
        printf("The multiplied are:%d ",multiplication);
        
        free(ptr);
    return 0;
}