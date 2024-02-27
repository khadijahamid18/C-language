#include <stdio.h>
int main()
{
    system("cls");
    int num , res;
    printf("-------------------Table from 1 to 10------------------\n\n");
    for (int i = 1; i <= 10; i++)
    {
        num = i;
        printf("Table of %d is : ", num);
        for (int j = 1; j <= 10; j++)
        {
            res = num * j;
            printf("%d", res);
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}