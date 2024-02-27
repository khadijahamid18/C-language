#include <stdio.h>
int main()
{
    system("cls");
    int num, sum = 0, rem, digit = 0;
    int count = 0;
    printf("Enter integer number: ");
    scanf("%d", &num);       
    while (num)
    {
        if (num < 0)
        {
            num = num * -1;
        }

        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
        count++;
    }

    printf("Sum of digits: %d \n ", sum);
    printf("Total number of digits %d \n ", count);

    return 0;
}