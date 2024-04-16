#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* ptr);
void count(struct Node* first);

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
    count(first); // Pass the first pointer to the count function
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

void count(struct Node* first) {
    int count = 0;
    struct Node* ptr = first;
    while(ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    printf("Number of nodes is: %d\n", count);
}
