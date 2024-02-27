#include <stdio.h>
int main()
{
    system("cls");
    int sum = 0, num, rem = 0;
    printf("Please enter 5 digit or lower number: ");
    scanf("%d", &num);
    for (int i = 1; num != 0; i++)
    {
        rem = num % 10;
        num = num / 10;
        if (rem == 6)
        {
            sum = sum + 1;
        }
    }
    printf("Total number of 6 are: %d ", sum);

    return 0;
}