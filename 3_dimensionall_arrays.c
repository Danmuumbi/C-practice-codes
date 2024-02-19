/*initialized as: data_type name_of_array[size1][size2][size3]={{},{},{}}*/
/*To print 3 dimensionall arrays , we need 3 for loops*/
#include <stdio.h>
int main()
{
    int arrays[2][2][3] = {{{2,3,4},{4,5,6}},{{3,2,1},{5,4,3}}};/*here we have 2 dimensional array,which consists of 2 rows and 3 columns*/
    int i,j,k;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            for (k=0;k<3;k++)
            {
                printf(" %d ", arrays[i][j][k]);
            }
        }
    }
    return 0;
}