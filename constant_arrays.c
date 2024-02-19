/*They are unique arrays which cannot be changed.We use the keyword "const" to initialize*/
#include <stdio.h>
int main()
{
    int i;
    const int array[] = {3,4,5,7,6,2};
    //array[1]={50};
    int length = sizeof(array) / sizeof(array[0]);
    {
    printf("My array consists of:\n ");
        for(i=0;i<length;i++)
    printf("%d ", array[i]);
    }
    return 0;
}