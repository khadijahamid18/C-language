#include <stdio.h>
int main()
{
    system("cls");
    int a[2][3];
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            *(*(a+i-1)+j-1) = 2*j;
        }
    }
    int *ptr = *a;
    for (int j = 0; j < 2; j++)
    {
        if (j % 3 == 0)
           printf("\n");
        printf("%d, ", *ptr);
        ptr++;
    }

    return 0;
}