#include <stdio.h>
#define SIZE 10
void transpose(int array[][SIZE], int row, int col);
int main()
{
    system("cls");
    int array[SIZE][SIZE];
    int row, col, temp = 0;
    printf("Enter no of rows:");
    scanf("%d", &row);
    while (row >= 10)
    {
        printf("INVALID!\n Again enter:"); // Validation
        scanf("%d", &row);
    }
    printf("Enter no of column:");
    scanf("%d", &col);
    while (col >= 10)
    {
        printf("INVALID!\n Again enter:"); // Validation
        scanf("%d", &col);
    }
    for (int i = 0; i < row; i++) // Taking elements from the user
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter elements : ");
            scanf("%d", &array[i][j]);
        }
    }
    printf("Matrix Elements: \n");  
    for (int i = 0; i < row; i++)
    {
        printf("|\t");
        for (int j = 0; j < col; j++) // displaying elements
        {
            printf("%d\t", array[i][j]);
        }
        printf("|\t\n");
    }
    for (int i = 0; i < row; i++) // swapping taking transpose
    {
        for (int j = 0; j < i; j++)
        {
            temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }

    transpose(array, row, col);

    return 0;
}
void transpose(int array[][SIZE], int row, int col)
{
    printf("\nTRANSPOSE OF A MATRIX IS:\n"); // Displayement of transpose
    for (int i = 0; i < row; i++)
    {
        printf("|\t");
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("|\n");
    }
}