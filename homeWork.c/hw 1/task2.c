// age in days
#include <stdio.h>
int main()
{
    system("cls");
    int age, days;
    printf("Please enter your age in years: ");
    scanf("%d", &age);
    days = age * 365;
    printf("Age in days: ");
    printf("%d", days);

    return 0;
}
