#include <stdio.h>
#define SIZE 30
struct Student
{
    int rollNo;
    char name[SIZE];
    char address[SIZE];
    double cgpa;
};
struct Student getData()
{
    struct Student s1;
    printf("Enter the roll number the of student 1: ");
    scanf("%d", &s1.rollNo);
    printf("Enter the name the of student 1: ");
    scanf("%s", &s1.name);
    printf("Enter the address the of student 1: ");
    scanf("%s", &s1.address);
    printf("Enter the cgpa the of student 1: ");
    scanf("%lf", &s1.cgpa);
    return s1;
}
struct Student displayData(struct Student s1)
{
    printf("\n");
    printf("The roll number of student is: %d\n", s1.rollNo);
    printf("The name of student is: %s\n", s1.name);
    printf("The roll number of student is: %s\n", s1.address);
    printf("The roll number of student is: %.2lf\n", s1.cgpa);
    // return s1;
};

int main()
{
    system("cls");
    struct Student s = getData();
    displayData(s);

    return 0;
}