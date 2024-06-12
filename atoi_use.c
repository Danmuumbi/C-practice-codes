#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "1234";
    int num = atoi(str);
    
    printf("The string \"%s\" converted to an integer: %d\n", str, num);
    
    return 0;
}
