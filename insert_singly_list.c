#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* ptr);
void insert_end(struct Node* first,int data);
void insert_beginning(struct Node** first, int data);

int main() {
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

    //connecting our nodes together
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(first);
    insert_end(first,100);
    insert_beginning(&first, 10);
    return 0;
}

void display(struct Node* ptr) {
    printf("Linked list elements are: ");
    while(ptr != NULL) {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_end(struct Node* first,int data) {
    struct Node* ptr, *temp;
    ptr=first;
    temp = (struct Node*)malloc(sizeof(struct  Node));
    temp->data = data;
    temp->next=NULL;
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
    printf("Inserted data at the end is : %d\n", temp->data);
    printf("And our new single list elements are :%d, ");
    display(first);
}
void insert_beginning(struct Node** first, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *first;
    *first = new_node;

    printf("Inserted element at the beginning: %d\n", data);
    printf("Linked list elements are: ");
    struct Node* ptr = *first;
    while (ptr != NULL) {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}