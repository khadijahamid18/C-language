#include <stdio.h>
#define ROWS 3
#define COLS 3
int main()
{
    system("cls");
    int mat[ROWS][COLS];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix Elements: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("Flipped / Reversed matrix\t");
    for (int rows = ROWS - 1; rows >= 0; rows--)
    {
        for (int col = 0; col < COLS; col++)
        {
            printf("%d\t", mat[rows][col]);
        }
        printf("\n");
    }

    return 0;
}