#include <stdio.h>
int main()
{
    system("cls");
    int sum = 0;
    int num = 1;
    int upperLimit = 0;

    printf("Please enter upper limit of sum ");
    scanf("%d", &upperLimit);

    while (num < upperLimit)
    // while (num < 10)
    {
        sum = sum + num;
        num = num + 1;
    }
    printf("Number : %d", num);
    printf("\nSum : %d", sum);

    return 0;
}