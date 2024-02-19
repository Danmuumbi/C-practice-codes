/*write a c code that adds an array rows and columns separatelly.Let the array be of three rows and 5 columns*/
#include <stdio.h>
int main()
{
    int arrays[3][5]={{3,4,5,6,7},{1,2,3,4,5}};
    int i,j;
    int sum = 0;
    printf("Row total: ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            sum += arrays[i][j];
        }
        printf("%d  ", sum);
        sum = 0;
    }
    printf("\n sum for columns is: ");
    for(j=0;j<5;j++)
        {
            for(i=0;i<3;i++)
            {
                sum+= arrays[i][j];
            }
            printf("%d  ", sum);
            sum = 0;
        }

    return 0;
    
}