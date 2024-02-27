#include <stdio.h>
int main()
{
    system("cls");
    int num1, num2, product = 0;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    while (num2 != 0)
    {
        product = product + num1;
        num2--;
    }

    printf("Product of integers: %d", product);

    return 0;
}