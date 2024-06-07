#include <stdio.h>

// Define a structure for student data
struct Student
{
    int rollNumber;
    char name[50];
    char department[50];
    char course[20];
    int yearOfAdmission;
};

// Maximum number of students
#define MAX_STUDENTS 450

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int totalStudents, int targetYear)
{
    printf("Students who joined in the year %d:\n", targetYear);

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].yearOfAdmission == targetYear)
        {
            printf("%s\n", students[i].name);
        }
    }
}

int main()
{
    // Array of structures to store student data
    struct Student students[MAX_STUDENTS];

    // Total number of students
    int totalStudents;

    // Get the total number of students from user
    printf("Enter the total number of students: ");
    scanf("%d", &totalStudents);

    // Input student data
    for (int i = 0; i < totalStudents; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: \n");
        scanf("%d", &students[i].rollNumber);
        printf("Name: \n");
        scanf("%s", &students[i].name);
        printf("Department: \n");
        scanf("%s", &students[i].department);
        printf("Course: \n");
        scanf("%s", &students[i].course);
        printf("Year of Admission: \n");
        scanf("%d", &students[i].yearOfAdmission);
    }

    // Example: Print names of students who joined in the year 2023
    printStudentsByYear(students, totalStudents, 2023);

    return 0;
}