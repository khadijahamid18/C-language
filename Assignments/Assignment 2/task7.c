// FUTURE VALUE
#include <stdio.h>
#include <math.h> // for  pow(5, n) = 5^n
double inputValedate(double);
double futureValue(double, double, double);

int main()
{
    system("cls");
    double presentValue, future_value, monthly_interestrate, number_of_months; // declaration of variables

    printf("Enter account's present value  : "); // value
    scanf("%lf", &presentValue);
    presentValue = inputValedate(presentValue); //  validation

    printf("Enter monthly interest rate  : "); // interest
    scanf("%lf", &monthly_interestrate);
    monthly_interestrate = inputValedate(monthly_interestrate); // validation

    printf("Enter number of months:"); //  months
    scanf("%lf", &number_of_months);
    number_of_months = inputValedate(number_of_months);
    
    future_value = futureValue(presentValue, monthly_interestrate, number_of_months); //   validation

    printf("Future value is :%lf ", future_value);

    return 0;
}

double inputValedate(double num)
{
    while (num < 0)
    {
        printf("Invalid .....\nEnter number greater then 0: ");
        scanf("%lf", &num);
    }
    return num;
}

double futureValue(double presentValue, double monthly_interest_rate, double number_of_months)
{
    monthly_interest_rate *= .01; // percentage interest rate

    return presentValue * pow((1 + monthly_interest_rate), number_of_months);
}