#include <stdio.h>
#define MAX 50 // Define a constant MAX with value 50

int main() {
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX]; // Declare matrices a, b, and product with maximum dimensions MAX x MAX
    int arows, acolumns, brows, bcolumns; // Declare variables to store the dimensions of matrices a and b
    int i, j, k; // Declare loop control variables
    int sum; // Declare a variable to store the sum of matrix multiplication

    // Prompt user to enter the dimensions of matrix a
    printf("Enter the rows and columns of matrix a: ");
    // Read the dimensions of matrix a from user input
    scanf("%d %d", &arows, &acolumns);

    // Prompt user to enter the elements of matrix a
    printf("Enter the elements of matrix a:\n");
    // Loop to read elements of matrix a from user input
    for (i = 0; i < arows; i++) {
        for (j = 0; j < acolumns; j++) {
            scanf("%d", &a[i][j]); // Read element at row i, column j of matrix a
        }
    }

    // Prompt user to enter the dimensions of matrix b
    printf("Enter the rows and columns of matrix b: ");
    // Read the dimensions of matrix b from user input
    scanf("%d %d", &brows, &bcolumns);

    // Check if the number of columns in matrix a is not equal to the number of rows in matrix b
    if (acolumns != brows) {
        printf("We cannot multiply such matrices.\n"); // Print error message
        return 0; // Exit the program
    }

    // Prompt user to enter the elements of matrix b
    printf("Enter the elements of matrix b:\n");
    // Loop to read elements of matrix b from user input
    for (i = 0; i < brows; i++) {
        for (j = 0; j < bcolumns; j++) {
            scanf("%d", &b[i][j]); // Read element at row i, column j of matrix b
        }
    }

    // Loop to perform matrix multiplication
    for (i = 0; i < arows; i++) {
        for (j = 0; j < bcolumns; j++) {
            // Initialize sum to 0 for each element of the resulting matrix
            sum = 0;
            for (k = 0; k < acolumns; k++) {
                // Calculate the sum of products for each element of the resulting matrix
                sum += a[i][k] * b[k][j];
            }
            // Store the sum as the corresponding element in the resulting matrix
            product[i][j] = sum;
        }
    }

    // Print the resulting matrix
    printf("The resultant matrix is:\n");
    for (i = 0; i < arows; i++) {
        for (j = 0; j < bcolumns; j++) {
            printf("%d ", product[i][j]); // Print each element of the resulting matrix
        }
        printf("\n"); // Move to the next row in the output
    }

    return 0; // Exit the program
}
