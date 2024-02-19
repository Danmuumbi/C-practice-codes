#include <stdio.h>

int* findMid(int array[], int len);

int main() {
    int array[] = {2, 3, 4, 4, 7};
    int len = sizeof(array) / sizeof(array[0]);
    int *mid = findMid(array, len);
    printf("%d", *mid);
    return 0;
}
int* findMid(int array[], int len)
{
    return &array[len / 2];
}