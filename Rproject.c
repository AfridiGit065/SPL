#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME_LEN 100
#define MAX_DEP_LEN 20
#define MAX_MAIL_LEN 100

void viewRec();
void add_newRec();
void modify_aRec();
void search();
void delete_aRec();

struct student_info
{
    int ID;
    char name[MAX_NAME_LEN];
    double number;
    char course[100];
    char department[MAX_DEP_LEN];
    char mail[MAX_MAIL_LEN];
    int year;
};

int main()
{
    int choice;


    printf("\n\n---Student Record Management System---\n");
    start :
    printf("\nWhat do you want to do?\n\n");
    printf("1. Add a record\n");
    printf("2. View record\n");
    printf("3. Modify a record\n");
    printf("4. Search record\n");
    printf("5. Delete a record\n");
    printf("6. Exit\n\n");

    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            add_newRec();
            goto start;
            break;
        case 2:
            viewRec();
            goto start;
            break;
        case 3:
            modify_aRec();
            goto start;
            break;
        case 4:
            search();
            goto start;
            break;
        case 5:
            delete_aRec();
            goto start;
            break;
        case 6:
            printf("Thank you!\n");
            exit(0);
            goto start;
        default:
            printf("Invalid choice!\nPlease enter a number from 1 to 6.\n");
        }
    }
    return 0;
}

void add_newRec()
{
    struct student_info newStudent;

    fflush(stdin);
    printf("Enter ID:\n");
    scanf("%d", &newStudent.ID);
    fflush(stdin);
    printf("Enter first name:\n ");
    scanf("%s", newStudent.name);
    fflush(stdin);
    printf("Enter number:\n ");
    scanf("%lf", &newStudent.number);
    printf("Enter course:\n ");
    scanf("%s", newStudent.course);
    printf("Enter mail address:\n ");
    scanf("%s", newStudent.mail);
    printf("Enter year:\n ");
    scanf("%d", &newStudent.year);

    FILE *file;
    file=fopen("student_info.txt","a");

    if(file==NULL)
    {
        printf("Error! File does not exist\n");
    }
    else
    {
        fprintf(file, "\n\n%d\n%s\n%.1lf\n%s\n%s\n%d\n", newStudent.ID, newStudent.name, newStudent.number, newStudent.course, newStudent.mail, newStudent.year);
        printf("\nInformation saved\n");
    }
    fclose(file);


}

void viewRec()
{
    struct student_info student;

    FILE *file;
    file=fopen("student_info.txt","r");

    if(file==NULL)
    {
        printf("Error! File does not exist\n");
    }
    else
    {
        printf("\nStudent Records:\n");
        while(fscanf(file, "%d %s %lf %s %s %d", &student.ID, student.name, &student.number, student.course, student.mail, &student.year) != EOF)
        {
            printf("ID: %d, Name: %s, Number: %.1lf, Course: %s, Mail: %s, Year: %d\n", student.ID, student.name, student.number, student.course, student.mail, student.year);
        }
        fclose(file);
    }
}

void modify_aRec()
{
    int id;
    printf("Enter the ID of the student you want to modify: ");
    scanf("%d", &id);

    FILE *file, *temp;
    file=fopen("student_info.txt","r");
    temp=fopen("temp.txt","w");

    if(file==NULL)
    {
        printf("Error! File does not exist\n");
    }
    else
    {
        struct student_info student;

        while(fscanf(file, "%d %s %lf %s %s %d", &student.ID, student.name, &student.number, student.course, student.mail, &student.year) != EOF)
        {
            if(student.ID == id)
            {
                fflush(stdin);
                printf("Enter first name: ");
                scanf("%s", student.name);
                fflush(stdin);
                printf("Enter new number: ");
                scanf("%lf", &student.number);
                printf("Enter new course: ");
                scanf("%s", student.course);
                printf("Enter new mail address: ");
                scanf("%s", student.mail);
                printf("Enter new year: ");
                scanf("%d", &student.year);
            }
            fprintf(temp, "\n\n%d\n%s\n%.1lf\n%s\n%s\n%d\n", student.ID, student.name, student.number, student.course, student.mail, student.year);
        }

        fclose(file);
        fclose(temp);
        remove("student_info.txt");
        rename("temp.txt", "student_info.txt");
        printf("\nRecord modified successfully.\n");
    }
}

void search()
{
    char search_name[MAX_NAME_LEN];
    printf("Enter name you want to search: ");
    scanf("%s", search_name);

    FILE *file;
    file=fopen("student_info.txt","r");

    if(file==NULL)
    {
        printf("Error! File does not exist\n");
    }
    else
    {
        struct student_info student;
        int found = 0;

        while(fscanf(file, "%d %s %lf %s %s %d", &student.ID, student.name, &student.number, student.course, student.mail, &student.year) != EOF)
        {
            if(strcmp(search_name, student.name) == 0)
            {
                printf("\nRecord Found:\n");
                printf("ID: %d, Name: %s, Number: %.1lf, Course: %s, Mail: %s, Year: %d\n", student.ID, student.name, student.number, student.course, student.mail, student.year);
                found = 1;
            }
        }

        if(!found)
        {
            printf("Record not found.\n");
        }

        fclose(file);
    }
}

void delete_aRec()
{
    int id;
    printf("Enter ID of the student you want to delete: ");
    scanf("%d", &id);

    FILE *file, *temp;
    file=fopen("student_info.txt","r");
    temp=fopen("temp.txt","w");

    if(file==NULL)
    {
        printf("Error! File does not exist\n");
    }
    else
    {
        struct student_info student;
        int found = 0;

        while(fscanf(file, "%d %s %lf %s %s %d", &student.ID, student.name, &student.number, student.course, student.mail, &student.year) != EOF)
        {
            if(student.ID != id)
            {
                fprintf(temp, "\n\n%d\n%s\n%.1lf\n%s\n%s\n%d\n", student.ID, student.name, student.number, student.course, student.mail, student.year);
            }
            else
            {
                found = 1;
            }
        }

        fclose(file);
        fclose(temp);
        remove("student_info.txt");
        rename("temp.txt", "student_info.txt");

        if(found)
        {
            printf("Record deleted successfully.\n");
        }
        else
        {
            printf("Record not found.\n");
        }
    }
}
