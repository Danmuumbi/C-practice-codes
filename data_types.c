/*Data types in c refer to an extensive system used for declaring variables or functions of different types.*/
#include <stdio.h>

int main()
{
    char name = 'A';/*This is a character data type which stores characters.Remember that a character is enclosed by single quotes*/
    int age = 56;/*This is an integer data type which stores integers*/
    float pi = 3.14;/*This is a float data type which stores float numbers*/
    double my_double = 50.99999;
    /*The main difference between double and float in C is that double provides higher precision (approximately 15 decimal digits) and uses more memory (8 bytes) compared to float (approximately 7 decimal digits, 4 bytes).*/
    printf("My name character is: %c\n", name);
    printf("My age data type is: %d\n", age);
    printf("My float number is: %f\n", pi);
    printf("My double number is: %f\n", my_double);/*displaying output of float and double numbers we use %f,however for double numbers to take input,we use lf*/
    return 0;
}