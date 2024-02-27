#include <stdio.h>
int main()
{
    system("cls");
    // i is no of rows
    // j is no colums
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
