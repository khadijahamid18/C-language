// Days out

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int inputValidate(int, int);
int numEmployees();  
int daysAbsent(int);
double avgDaysAbsent(int, int);

int main()
{
    system("cls");
    int num_employees,
    total_days_absent;

    double avg_days_absent;

    num_employees = numEmployees();

    total_days_absent = daysAbsent(num_employees);

    avg_days_absent = avgDaysAbsent(num_employees, total_days_absent);

    printf("num of employee :%d\n", num_employees);
    printf(" total_days_absent =%d\n", total_days_absent);
    printf(" avg_days_absent = %lf\n ", avg_days_absent);

    return 0;
}
int inputValidate(int num1, int num2)
{

    while (num1 < num2)
    {
        printf("Error. Integer must not be  less than :%d", num2);
    }

    return num1;
}

int numEmployees()
{
    int num;

    printf("Enter the number of employees in the company:");
    scanf("%d", &num);

    return inputValidate(num, 1);
}

int daysAbsent(int num_employees)
{

    int totalDaysAbsent;
    int sum = 0;
    printf("Enter number of days each employee missed \n during the past year: ");

    for (int i = 0; i < num_employees; i++)
    {

        printf("\nEmployee # %d :", (i + 1));
        scanf("%d", &totalDaysAbsent);
        totalDaysAbsent = inputValidate(totalDaysAbsent, 0);
        sum = totalDaysAbsent + sum;
        // totalDaysAbsent += inputValidate(totalDaysAbsent, 0);
    }

    return sum;
}

double avgDaysAbsent(int num_employees, int days_absent)
{

    return days_absent / (double)(num_employees);
}