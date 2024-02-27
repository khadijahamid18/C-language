// age in minutes
#include <stdio.h>
int main()
{
    system("cls");
    int age, min;
    printf("Please enter your age in years: ");
    scanf("%d", &age);
    min = age * 365 * 24 * 60;
    printf("Age in minutes: ");
    printf("%d", min);

    return 0;
}
