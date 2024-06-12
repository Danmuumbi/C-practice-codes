/*Array = it is a data structure containing a number of variables of same type*/
/*There are two types of arrrays namelly : one dimensional and multi dimensional arrrays*/
/*T he suyntax of one dimensional array s as : "data_type name of the array[number of elements the array carries]""*/
/*This is where the number of elements can only be specified using any integer type as which should be positive : "5 or 5*3 or 6/2 or 3+3 or etc"*/
/*Specifying array using macro is considered the best way: eg: #define N 10. int arr [N];*/
/*Accessing the elements in array use/write the array_name[index of the array you need to access] bearing in mind indexing starts from 0*/
#include <stdio.h>
int main(){
int a[10],i; /*initializing an array of 10 elements*/
for (i = 0;i < 10;i++)
{
printf("Enter an integer %d:", i);
scanf("%d", &a[i]);
getchar();
}
printf("\nMy array elements are :\n");
for (i = 0;i < 10;i++)
{
printf("%d",a[i]);
}
printf("\narray 0 is %d",a);

return 0;
}
/*You can realise that changing the number of elements to be stored in our array it would be tyresome since you have to change for all for loops,this takes us to the advantage of using macro to define arrays*/
/*remember still its not a must to initialize the array as int a[10],i; initializing an array of 10 elements
for (i = 0;i < 10;i++),,,instead you can initialize it with a single line as : int arr[10] = {0}*/
