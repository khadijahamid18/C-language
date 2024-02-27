#include <stdio.h>
int main()
{
    system("cls");
    int marks;
    printf("Please enter the marks obtained by the student: ");
    scanf("%d", &marks);

    if (marks >= 50 && marks <= 100)
    {
        printf("The student is PASS");
    }
    else if (marks < 50 && marks > 0)
    {
        printf("The student is Fail");
    }
    else
    {
        printf("There is an error in the number");
    }

    return 0;
}