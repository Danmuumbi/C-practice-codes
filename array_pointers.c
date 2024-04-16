#include <stdio.h>

int main() {
    int i, x[6], sum = 0;
    int *ptr = x; 

    printf("Enter 6 numbers: ");

    for (i = 0; i < 6; ++i) {
        scanf("%d", ptr);

        sum += *ptr;

        ptr++;
    }

    printf("Sum = %d", sum);

    return 0;
}
