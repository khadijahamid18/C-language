#include <stdio.h>
int main()
{
    system("cls");
    int num1, num2, max;
    printf("Please enter first number: ");
    scanf("%d", &num1);
    while (num1 <= 0)
    {
        printf("Invalid Number!\n");
        printf("Please enter first number again: ");
        scanf("%d", &num1);
    }
    printf("Please enter second number: ");
    scanf("%d", &num2);
    while (num2 <= 0)
    {
        printf("Invalid Number!\n");
        printf("Please enter second number again: ");
        scanf("%d", &num2);
    }
    // agar num1 > hy num2 se to ? k baad wali statement run ho gi nhi to : k bad wali
    max = (num1 > num2) ? num1 : num2;

    while (1)
    {

        if ((max % num1 == 0) && (max % num2 == 0))
        {
            printf("The LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}