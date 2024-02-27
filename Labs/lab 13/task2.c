#include <stdio.h>
struct address
{
    char streetAdress[100];
    char city[50];
    char country[50];
};
struct Student
{
    char name[60];
    struct address stdAdd;
    float GPA;
};

int main()
{
    system("cls");

    struct Student s1 = {"Khadija", {"st # 15", "Lahore", "Pakistan"}, 3.5};
    struct Student s2;
    s2 = s1;
    printf("Student Name: %s\n", s1.name);
    printf("Student Address: \n%s", s1.stdAdd.streetAdress);
    printf("\n%s", s1.stdAdd.city);
    printf("\n%s", s1.stdAdd.country);
    printf("Student gpa: %.2lf\n", s1.GPA);
    printf("\n");
    printf("Student Name: %s\n", s2.name);
    printf("Student Address: \n%s", s2.stdAdd.streetAdress);
    printf("\n%s", s2.stdAdd.city);
    printf("\n%s", s2.stdAdd.country);
    printf("Student gpa: %.2lf\n", s2.GPA);

    return 0;
}