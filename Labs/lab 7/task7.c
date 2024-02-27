#include <stdio.h>
unsigned long long int FibonacciSeriesUsingRecursion(int num);
int main()
{
    system("cls");
    int num;
    do
    {
        printf("Enter number of terms you want to print: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Invalid Input");
        }

    } while (num < 0);

    printf("Fibonacci Series \n ");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", FibonacciSeriesUsingRecursion(i));
    }

    return 0;
}
unsigned long long int FibonacciSeriesUsingRecursion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return (FibonacciSeriesUsingRecursion(num - 1) + FibonacciSeriesUsingRecursion(num - 2));
    }
}

// #include <stdio.h>
// long fibonacciSeries(int number)
// {
//     int num1 = 0, num2 = 1, num3;

//     printf("%d\t%d\t", num1, num2);

//     for (int i = 2; i <= number; i++)
//     {
//         num3 = num1 + num2;
//         printf("\n %d\t", num3);
//         num1 = num2;
//         num2 = num3;
//     }
//     printf("\n%d is the largest number", num3);
//     return num3;
// }
// int main()
// {
//     system("cls");
//     int number;
//     printf("Enter any number to print series: ");
//     scanf("%d", &number);
//     fibonacciSeries(number);

//     return 0;
// }