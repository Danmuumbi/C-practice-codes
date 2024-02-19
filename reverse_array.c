/*program to print array in reverse order*/
#include <stdio.h>
int main()
{
    int marks[] = {2,3,10,2,2,4,9,6};
    int i;
    printf("the elements are: ");
    for (i=7;i>=0;i--){
    printf("%d ",marks[i]);
    }
    return 0;
}