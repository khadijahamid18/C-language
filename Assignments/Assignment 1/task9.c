#include <stdio.h>
int main()
{
    system("cls");
    int rollNumber, NumOfSemesters;
    float gpa1, gpa2, cgpa;
    printf("Enter Your Roll Number: ");
    scanf("%d", &rollNumber);

    printf("Enter number of Semesters: ");
    scanf("%d", &NumOfSemesters);

    printf("Enter your semester 1 GPA: ");
    scanf("%f", &gpa1);

    printf("Enter your semester 2 GPA: ");
    scanf("%f", &gpa2);

    printf("*************Result Card**************");

    printf("\nRoll Number: %d", rollNumber);

    cgpa = (gpa1 + gpa2) / NumOfSemesters;

    printf("\nCGPA: %.2f", cgpa);

    return 0;
}