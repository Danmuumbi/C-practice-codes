#include <stdio.h>
#include <stdlib.h>
void display();
    struct Node
    {
        int data;//Data to be stored of type integer
        struct Node* next;//pointer variable to point to the next element
    };
    int main()
    {
        struct Node* first;
        struct Node* second;
        struct Node* third;
        struct Node* fourth;

        //allocating memory to our struct nodes

        first = (struct Node*)malloc(sizeof(struct Node));
        second = (struct Node*)malloc(sizeof(struct Node));
        third = (struct Node*)malloc(sizeof(struct Node));
        fourth = (struct Node*)malloc(sizeof(struct Node));
        //inserting values to our nodes
        first->data = 20;
        second->data = 70;
        third->data = 80;
        fourth->data = 90;

        //connecting our nodes tongether

        first->next =second;
        second->next=third;
        third->next=fourth;
        fourth->next=NULL;
        display(first);
        return 0;

    }
    void display(struct Node* ptr)
    {
        printf("Linked lists elements are:");
        while(ptr != NULL)
        {
            printf("%d, ",ptr->data);
            ptr = ptr->next;
        }
    }