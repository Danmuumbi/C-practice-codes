/*pointers application to to find the largest and smallest element in an array*/
#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    // Initialize min and max with the first element of the array
    *min = *max = *arr;

    // Iterate through the array to find min and max
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min)
            *min = *(arr + i);
        if (*(arr + i) > *max)
            *max = *(arr + i);
    }
}

int main() {
    int arr[] = {5, 3, 9, 2, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("The minimum element is: %d\n", min);
    printf("The maximum element is: %d\n", max);

    return 0;
}
