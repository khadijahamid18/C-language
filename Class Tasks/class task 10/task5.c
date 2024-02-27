#include <stdio.h>
int main()
{
    system("cls");
    int salary = 0;
    int dFlag = 0;
    printf("Please enter the salary: ");
    scanf("%d", &salary);

    salary > 10000 &&salary < 20000 ? dFlag = 1 : salary >= 20000 ? dFlag = 2
                                                                  : dFlag;

    switch (dFlag)
    {
    case 0:
        printf("No Deduct %d ", salary);
        break;
    case 1:
        printf("Net Payable (salary - Deduction) : %d \n ", salary - 1000);
        break;
    case 2:
        printf("Seven Percent Deduction %d \n ", (salary = salary - (salary * 0.07)));
        printf("%d", salary);
        break;
    default:
        printf("Invalid Result ");
        break;
    }

    return 0;
}
