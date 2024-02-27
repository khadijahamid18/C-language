#include <stdio.h>
int main()
{
    system("cls");
    int num, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num < 0)
    {
        printf("Invalid Number! \n");
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    printf("Twin pair of %d are; \n", num);

    for (int i = 3; i < num; i++)
    {
        prime = 0;
        for (int j = 3; j < i; j++)
        {
            if ((i % j == 0) || ((i + 2) % j == 0))
            {
                prime = 1;
            }
        }
        if (prime == 0)
        {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
    getchar();

    return 0;
}

