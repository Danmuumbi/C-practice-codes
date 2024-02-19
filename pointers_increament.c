#include <stdio.h>
int main()
{
    int a[] = {2,4,6,8,9};
    int *p = &a[0];
    printf("%d\n ", ++(*p));/*This is called pre increament*/
    printf("\n%d ", p);
    printf("\n%d ", (*p++)); /*This is called post decrement*/
    printf("\n%d ", p);

    return 0;
}