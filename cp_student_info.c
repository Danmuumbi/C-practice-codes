#include <stdio.h>
#include <string.h>

// Define structure for student
struct Student {
    int id;
    char name[50];
    float grade;
};

// Function prototypes
void addStudent(struct Student database[], int *numStudents);
void displayStudent(struct Student database[], int numStudents);
void updateStudent(struct Student database[], int numStudents);
void deleteStudent(struct Student database[], int *numStudents);

int main() {
    struct Student database[100]; // Assuming max 100 students
    int numStudents = 0;
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
                addStudent(database, &numStudents);
                break;
            case 2:
                displayStudent(database, numStudents);
                break;
            case 3:
                updateStudent(database, numStudents);
                break;
            case 4:
                deleteStudent(database, &numStudents);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}

// Function to add a student to the database
void addStudent(struct Student database[], int *numStudents) {
    if (*numStudents < 100) {
        printf("Enter student ID: ");
        scanf("%d", &database[*numStudents].id);
        printf("Enter student name: ");
        scanf("%s", database[*numStudents].name);
        printf("Enter student grade: ");
        scanf("%f", &database[*numStudents].grade);
        (*numStudents)++;
        printf("Student added successfully.\n");
    } else {
        printf("Database is full. Cannot add more students.\n");
    }
}

// Function to display student information
void displayStudent(struct Student database[], int numStudents) {
    int id;
    printf("Enter student ID: ");
    scanf("%d", &id);

    for (int i = 0; i < numStudents; i++) {
        if (database[i].id == id) {
            printf("Name: %s\n", database[i].name);
            printf("Grade: %.2f\n", database[i].grade);
            return;
        }
    }
    printf("Student not found.\n");
}

// Function to update student information
void updateStudent(struct Student database[], int numStudents) {
    int id;
    printf("Enter student ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < numStudents; i++) {
        if (database[i].id == id) {
            printf("Enter new name: ");
            scanf("%s", database[i].name);
            printf("Enter new grade: ");
            scanf("%f", &database[i].grade);
            printf("Student information updated successfully.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

// Function to delete a student from the database
void deleteStudent(struct Student database[], int *numStudents) {
    int id;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *numStudents; i++) {
        if (database[i].id == id) {
            // Shift all elements after deletion point one position left
            for (int j = i; j < *numStudents - 1; j++) {
                database[j] = database[j + 1];
            }
            (*numStudents)--;
            printf("Student deleted successfully.\n");
            return;
        }
    }
    printf("Student not found.\n");
}
