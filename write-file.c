#include <stdio.h>

int main() {
    char myString[100];
    FILE *fptr;

    // Open the file in write mode
    fptr = fopen("My file.txt", "w");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }

    // Write your name to the file
    fprintf(fptr, "Daniel Muuo\n");

    // Close the file
    fclose(fptr);

    // Open the file in read mode
    fptr = fopen("My file.txt", "r");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    // Read from the file
    fgets(myString, 100, fptr);

    // Close the file
    fclose(fptr);

    // Output the read data
    printf("Data read from the file: %s", myString);

    return 0;
}
