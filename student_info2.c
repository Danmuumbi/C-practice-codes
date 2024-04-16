#include <stdio.h>
#include <string.h>

// Define a struct to store student information
struct Student {
    char name[50];
    int studentID;
    float grade;
    int age;
    char gender;
};

// Initialize an array of structs to simulate the database
struct Student database[100]; // Assuming a maximum of 100 students

int main() {
    int numStudents = 0; // Keep track of the number of students in the database

    while (1) {
        printf("\nStudent Database Management System\n");
        printf("1. Add a student\n");
        printf("2. Display student information\n");
        printf("3. Update student information\n");
        printf("4. Delete a student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add a student
                printf("Enter student name: ");
                scanf("%s", database[numStudents].name);
                printf("Enter student ID: ");
                scanf("%d", &database[numStudents].studentID);
                printf("Enter student grade: ");
                scanf("%f", &database[numStudents].grade);
                printf("Enter student age: ");
                scanf("%d", &database[numStudents].age);
                printf("Enter student gender (M/F): ");
                scanf(" %c", &database[numStudents].gender);
                numStudents++;
                break;

            case 2:
                // Display student information
                printf("Enter student ID: ");
                int searchID;
                scanf("%d", &searchID);
                for (int i = 0; i < numStudents; i++) {
                    if (database[i].studentID == searchID) {
                        printf("Name: %s\n", database[i].name);
                        printf("Grade: %.2f\n", database[i].grade);
                        printf("Age: %d\n", database[i].age);
                        printf("Gender: %c\n", database[i].gender);
                        break;
                    }
                }
                break;

            case 3:
                // Update student information
                printf("Enter student ID to update: ");
                int updateID;
                scanf("%d", &updateID);
                for (int i = 0; i < numStudents; i++) {
                    if (database[i].studentID == updateID) {
                        printf("Enter new name: ");
                        scanf("%s", database[i].name);
                        printf("Enter new grade: ");
                        scanf("%f", &database[i].grade);
                        printf("Enter new age: ");
                        scanf("%d", &database[i].age);
                        printf("Enter new gender (M/F): ");
                        scanf(" %c", &database[i].gender);
                        printf("Student information updated successfully.\n");
                        break;
                    }
                }
                break;

            case 4:
                // Delete a student
                printf("Enter student ID to delete: ");
                int deleteID;
                scanf("%d", &deleteID);
                for (int i = 0; i < numStudents; i++) {
                    if (database[i].studentID == deleteID) {
                        for (int j = i; j < numStudents - 1; j++) {
                            database[j] = database[j + 1];
                        }
                        numStudents--;
                        printf("Student deleted successfully.\n");
                        break;
                    }
                }
                break;

            case 5:
                // Exit the program
                printf("Exiting. Thank you!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
