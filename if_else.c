#include <stdio.h>

int main(){// ==,++I,I++,<=,=>,!=,%,||,&&
    int grade;
    printf("my grade is:");
    scanf("%d",&grade);
    if (grade > 100)
    {
        printf("\n ivalid grade");
    }
    else if(grade>70 && grade<100){
        printf("print A");
   }
    else if(grade > 55 && grade < 70){
        printf("B");
    }
    else{
        printf("C");
    }

    return 0;

    
}