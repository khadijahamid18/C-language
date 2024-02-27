#include <stdio.h>
int main()
{
    system("cls");
    int adult = 30, child = 20, senior = 20, choice, months, charge;
    printf("\n Health Club Membership Menu");

    printf("\n Adult Membership: %d", adult);

    printf("\n Child Membership: %d", child);

    printf("\n Senior Citizenship: %d", senior);

    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    printf(" For how many months: ");
    scanf("%d", &months);

    if (choice == 1)
    {
        charge = adult * months;
        printf(" The total charges are: %d", charge);
    }
    else if (choice == 2)
    {
        charge = child * months;
        printf(" The total charges are: %d", charge);
    }
    else if (choice == 3)
    {
        charge = senior * months;
        printf(" The total charges are: %d", charge);
    }
    else
    {
        printf(" You have entered the invalid number");
    }

    return 0;
}