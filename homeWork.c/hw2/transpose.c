#include <stdio.h>
#define ROWS 3
#define COLS 3
int main()
{
    system("cls");
    int mat[ROWS][COLS], trans[ROWS][COLS];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix Elements\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose Matrix: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}