/*Use of macro to define arrays as shown below*/
#include <stdio.h>
#define N 10/*Defining a macro.*/
int main(){
int a[N],i; /*initializing an array of 10 elements*/
for (i = 0;i < N;i++)
{
printf("Enter an integer %d: ", i);
scanf("%d", &a[i]);
getchar();
}
printf("\nMy array elements are :\n");
for (i = 0;i < N;i++)
{
printf("%d",a[i]);
}
return 0;
}
/*While using macro to define an array,you will only need to change the size of the array in the defination of the macro*/