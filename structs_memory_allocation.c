#include <stdio.h>
#include <stdlib.h>
struct schools{
    int score;
    int population;
    char name[50];
};
int main()
{
    struct schools *ptr; 
    int i,n;
    ptr = (struct schools*)malloc(sizeof(struct schools));
    printf("The school scored: ");
    scanf("%d", &ptr->score);

    printf("The school has a population of:");
    scanf("%d", &ptr->population);

    printf("The school is called: ");
    scanf("%s", ptr->name);
    printf("Displaying information\n           ");
    printf("The school name is %s and its population is %d and it scored %d", ptr->name,ptr->population,ptr->score);
    free(ptr);
    return 0;

}