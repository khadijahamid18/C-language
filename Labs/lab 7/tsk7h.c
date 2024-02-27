#include <stdio.h>
#include <math.h>
unsigned long long int fibonacciSeries(unsigned long long int num)
{
    static int num = 0;
    static int num1 = 0, num2 = 1, num3; // static means do not remove last function value
    if (num > 2)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%llu\t", num3); // display on screen
        num = num3;
        fibonacciSeries(num - 1); // To run like a loop
        return num;
    }
    else
    {
        return 1;
    }
}
int main()
{
    system("cls");
    int number;
    unsigned long long largest = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d\t%d\t", 0, 1);
    largest = fibonacciSeries(number);
    printf("\nLargest value is %llu", largest);
    return 0;
}

