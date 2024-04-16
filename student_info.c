#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for student
struct Student {
    int id;
    char name[50];
    float grade;
    struct Student *next; // Pointer to the next student node
};

// Function prototypes
void addStudent(struct Student **head);
void displayStudent(struct Student *head);
void updateStudent(struct Student *head);
void deleteStudent(struct Student **head);

int main() {
    struct Student *head = NULL; // Head of the linked list

    int choice;

    do {
        // Display menu
        printf("\nStudent Database Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Student Information\n");
        printf("3. Update Student Information\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent(&head);
                break;
            case 2:
                displayStudent(head);
                break;
            case 3:
                updateStudent(head);
                break;
            case 4:
                deleteStudent(&head);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);

    // Free memory before exiting
    while (head != NULL) {
        struct Student *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

// Function to add a student to the linked list
void addStudent(struct Student **head) {
    struct Student *newStudent = (struct Student *)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed. Cannot add student.\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &newStudent->id);
    printf("Enter student name: ");
    scanf("%s", newStudent->name);
    printf("Enter student grade: ");
    scanf("%f", &newStudent->grade);

    newStudent->next = *head;
    *head = newStudent;

    printf("Student added successfully.\n");
}

// Function to display student information
void displayStudent(struct Student *head) {
    int id;
    printf("Enter student ID: ");
    scanf("%d", &id);

    struct Student *current = head;
    while (current != NULL) {
        if (current->id == id) {
            printf("Name: %s\n", current->name);
            printf("Grade: %.2f\n", current->grade);
            return;
        }
        current = current->next;
    }
    printf("Student not found.\n");
}

// Function to update student information
void updateStudent(struct Student *head) {
    int id;
    printf("Enter student ID to update: ");
    scanf("%d", &id);

    struct Student *current = head;
    while (current != NULL) {
        if (current->id == id) {
            printf("Enter new name: ");
            scanf("%s", current->name);
            printf("Enter new grade: ");
            scanf("%f", &current->grade);
            printf("Student information updated successfully.\n");
            return;
        }
        current = current->next;
    }
    printf("Student not found.\n");
}

// Function to delete a student from the linked list
void deleteStudent(struct Student **head) {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    struct Student *current = *head;
    struct Student *prev = NULL;

    while (current != NULL) {
        if (current->id == id) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            printf("Student deleted successfully.\n");
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Student not found.\n");
}
