#include <stdio.h>
int main()
{
    system("cls");
    int sum = 0;
    int num = 1;
    int upperLimit = 0;

    // printf("Please enter upper limit of sum: ");
    // scanf("%d", &upperLimit);
    // while (num < upperLimit)
    while (num < 20)
    {
        if (num % 2 == 0)
        {
            sum = sum + num;
            printf("\nSum : %d", sum);
        }
        num = num + 1;

        // printf("\nNumber : %d", num);
    }

    return 0;
}