#include <stdio.h>

int max(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int main() {
    int num1 = 40, num2 = 30;
    printf("maximum number is %d\n", max(num1, num2));
    return 0;
}
