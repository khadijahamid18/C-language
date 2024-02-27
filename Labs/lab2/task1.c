#include <stdio.h>
int main()
{
    system("cls");
    int num, num1, num2, num3, sum;
    printf("Enter 3-digit positive integer: ");
    scanf("%d", &num);

    num1 = num % 10;
    num = num / 10;

    num2 = num % 10;
    num = num / 10;

    num3 = num % 10;
    num = num / 10;

    sum = num1 + num2 + num3;

    printf("Sum of three integers are: %d", sum);

    return 0;
}