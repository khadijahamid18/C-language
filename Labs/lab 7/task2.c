#include<stdio.h>
#include<math.h>

double presentvalue(double futureValue, double noOfYears, double annualInterest)
{
    double presentValue;
    presentValue = futureValue / pow(( 1 + annualInterest), noOfYears);
    return presentValue;
}
int main()
{
    system("cls");
    double currentValue, annualRateInterest, numOfYears, futureValues;

    printf("Enter the future value for account: $");
    scanf("%lf", &futureValues);

    printf("Enter the annual interest rate for account: ");
    scanf("%lf", &annualRateInterest);

    printf("Enter the number of years for which you want to save your money in account: "); 
    scanf("%lf", &numOfYears);

    currentValue = presentvalue(futureValues, annualRateInterest, numOfYears);
    printf("The present value which you need to deposit today: $%lf", currentValue); 


    return 0;
}