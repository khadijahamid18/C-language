#include <stdio.h>
int main()
{
    system("cls");
    int num1, num2; 
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("Number 1 is larger than number 2");
    }
    else
    {
        printf("Number 2 is larger than number 1");
    }

    return 0;
}