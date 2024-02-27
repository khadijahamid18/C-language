#include <stdio.h>
int main()
{
    system("cls");
    int rows, c, k;

    printf("Enter number of rows\n");
    scanf("%d", &rows);

    while (rows < 3)
    {
        if (rows < 3)
        {
            printf("Enter rows greater than or equal to 3: ");
            scanf("%d", &rows);
        }
    }

    for (k = 1; k <= rows; k++)
    {
        for (c = 1; c <= rows - k; c++)
            printf(" ");

        for (c = 1; c <= 2 * k - 1; c++) 
            printf("*");

        printf("\n");
    }                

    for (k = 1; k <= rows - 1; k++)
    {
        for (c = 1; c <= k; c++)
            printf(" ");

        for (c = 1; c <= 2 * (rows - k) - 1; c++)  
            printf("*");

        printf("\n");
    }

    return 0;
}

