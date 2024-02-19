/*Designated initialization is a feature introduced in C99 that allows you to initialize specific members of a structure or elements of an array using designated initializers*/
/*an example is as: "arr [5] = {1,0,0,3,0}" you realize in designated initialization its not a must to include the zeros.so you can use:"arr[5] = {[0]=1,[3]=3}"*/
#include <stdio.h>
int main()
{
    int marks[] = {2,[3] = 10,2,2,[4]=9,6};
    int i;
    printf("the elements are: ");
    for (i=0; i<sizeof(marks)/sizeof(marks[0]);i++){
    printf("%d ",marks[i]);
    }
    return 0;
}