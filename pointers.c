//It is a special variable which is capable for storing initial address of the pointer which it points to
/*To declare a pointer we use the syntax as "data_type *pointer_name"*/
/*To assign address of variable : use : int x =8;int *ptr; ptr = &x or in one line as int x = 5, ptr = &x;*/
#include <stdio.h>
int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;
    printf("%d", *ptr);
    /*To change the value of a pointer variable*/
    *ptr = 7;
    printf("\n%d", *ptr);
    return 0;
}