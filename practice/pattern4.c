#include <stdio.h>
int main()
{
    system("cls");
    // i = rows
    // j = coloum
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j <= 10 - i)
            {
                printf("   ");   
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }

    return 0;
}