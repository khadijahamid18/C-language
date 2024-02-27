// avaerage of 10 students
#include <stdio.h>
int main()
{
    system("cls");
    int age[10] = {0};
    // for (int i = 0; i < 10; i++)   // initialization
    // {
    //     age[i] = 0;
    // }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter the age of student %d: ", i + 1); 
        scanf("%d", &age[i]);

        sum = sum + age[i];
    }
    int average = 0;
    average = sum / 10;
    printf("Average age is %d ", average);

    return 0;
}