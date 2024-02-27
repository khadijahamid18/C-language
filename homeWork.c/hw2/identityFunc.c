// C program to check a given matrix is an identity matrix or not

#include <stdio.h>
#define ROWS 3
#define COLS 3
int isIdentityMatrix(int Matrix[][COLS]) 
{
    int flag = 0;
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (i == j && Matrix[i][j] != 1)
            {
                flag = -1;
                break;
            }
            else if (i != j && Matrix[i][j] != 0)
            {
                flag = -1;
                break;
            }
        }
    }

    return flag;
}
int main()
{
    system("cls");
    int Matrix[ROWS][COLS];
    int row = 0, col = 0;
    // flag is to detect any change
    int flag = 0;

    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++) 
        {
            scanf("%d", &Matrix[i][j]);
        }
    }

    if (isIdentityMatrix(Matrix) == 0) 
    {
        printf("Matrix1 is an IDENTITY MATRIX\n");
    }

    else
    {
        printf("Matrix1 is NOT an identity matrix\n");
    }

    return 0;
}