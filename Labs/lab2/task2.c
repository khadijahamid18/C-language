#include <stdio.h>
int main()
{
    system("cls");
    int num, num1, num2, num3;

    printf("Enter three digit positive integer: ");
    scanf("%d", &num);

    num1 = num % 10;
    num = num / 10;

    num2 = num % 10;
    num = num / 10;

    num3 = num % 10;
    num = num / 10;

    printf("Its reverse is: %d%d%d", num1, num2, num3);

    return 0;
}