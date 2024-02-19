/*You can get to know the size of the array using the syntax "sizeof(name_of_array)/sizeof(name_of_array[0]) "*/
/*The keyword sizeof(name_of_array) = gives the size of the array in bytes. As well the keywords sizeof(name_of_array[0] = gives the size of the element of array in index 0 which is 4 bytes for any element in array )*/
#include <stdio.h>
int main()
{
    int array[] = {2,4,5,67,6,45,456,89,0,6,54,55,33,23,55,45,67,87,98,90,76,54,76,12,45679,78,9786,44,678,86,44,34,23,67,55,54,67,45,44,77,};/*it would be tiresome to read all this mannually*/
    printf("The size of our array is : %d ", sizeof(array)/sizeof(array[0]));

    return 0;
}