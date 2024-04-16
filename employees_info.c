#include <stdio.h>
struct employee{
    char Employee_name[50];
    int Employee_id;
    char Employee_role[50];
    int Employee_age;
    char Employee_gender[];
};
    struct employee number[100];
    int main(){
    int numEmployees = 0;
    int choice;
    while(1){
        printf("\nEmployee Database Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee Information\n");
        printf("3. Update Employee Information\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("\nEnter Employee name: ");
            scanf("%s",number[numEmployees].Employee_name);
            printf("\nEnter Employee ID:");
            scanf("%d",&number[numEmployees].Employee_id);
            printf("\nEnter employee role:");
            scanf("%s",number[numEmployees].Employee_role);
            printf("Enter employee age:");
            scanf("%d",&number[numEmployees].Employee_age);
            printf("Enter employee gender:");
            scanf("%s",number[numEmployees].Employee_gender);
            printf("Information stored successfully!");
            numEmployees++;
            break;
            case 2:
            printf("Enter employee ID to display information:");
            int searchId;
            scanf("%d",&searchId);
            for(int i =0;i<numEmployees;i++){
                if(number[i].Employee_id == searchId)
                printf("employee ame is %s",number[i].Employee_name);
                printf("\nEmployee gender is: %s",number[i].Employee_gender);
                printf("employee age is %d",number[i].Employee_age);
                break;
            }
        }
    }
    return 0;
}