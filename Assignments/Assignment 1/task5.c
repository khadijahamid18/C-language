#include <stdio.h>

int main()
{
    system("cls");
    int num, count = 0;
    char ch = 'y';

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++)
        {

            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d is a prime number.", num);
        }
        else
        {
            printf("%d is not a prime number.", num);
        }
        printf("\nDo you want to continue ? ");
        getchar();
        scanf("%c", &ch);
    } while (ch == 'y');

    return 0;
}