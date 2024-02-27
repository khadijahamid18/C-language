#include <stdio.h>
int main()
{
    system("cls");
    int l = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 10 - l; k++)
        {
            printf("*");
        }
        l++;
        printf("\n");
    }
    return 0;
}

