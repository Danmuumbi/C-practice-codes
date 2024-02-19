/*Multidimensional arrays = They are defined as an array of arrays*/
/*its syntax is as : "data_type name_of_array[size1][size2]...[sizeN]"*/
/*For example for 2 dimensional array the syntax of declaring them will be: "int array[3][4]" so the total number of elements in our array is got by multiplyng the sizes of our arraays"*/
/*Creating and accessing two dimensional arrays*/
#include <stdio.h>
int main()
{
    int arrays[2][3] = {{2,3,4},{4,5,6}};
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ", arrays[i][j]);
        }
    }
    return 0;
}