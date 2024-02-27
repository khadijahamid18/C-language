#include <stdio.h>
int main()
{
    system("cls");
    int num1, num2, num3;
    printf("Please enter the first number: ");
    scanf("%d", &num1);

    printf("Please enter the second number: ");
    scanf("%d", &num2);

    printf("Please enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Number 1 is larger than number 2 and number 3");
    }

    else if (num2 > num1 && num2 > num3)
    {
        printf("Number 2 is larger than number 1 and number 3");
    }

    else if (num3 > num2 && num3 > num1)
    {
        printf("Number 3 is larger than number 1 and number 2");
    }
    else
    {
        printf("Invalid Number");
    }
    return 0;
}