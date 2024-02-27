#include <stdio.h>
#define ROWS 10
#define COLS 10
void getInput(int a[][COLS], int rows, int cols);
void display(int a[][COLS], int rows, int cols);
void insert(int matrixA[][COLS], int matrixB[][COLS], int rowsA, int colsA, int rowsB, int colsB, int indexRows, int indexCols);
int main()
{
    system("cls");
    int rowsA, colsA, rowsB, colsB, indexRows, indexCols;
    int matrix[ROWS][COLS];
    int matrixB[ROWS][COLS];
    rowsA = colsA = rowsB = colsB = indexRows = indexCols = 0;
    // Taking inputs from user for matrix A

    do
    {
        printf("Enter number of Rows of Matrix A ( 0 - 10 ) : ");
        scanf("%d", &rowsA);
        if (rowsA <= 0 || rowsA > 10)
            printf("Invalid Input ! ");
    } while (rowsA <= 0 || rowsA > 10);
    do
    {
        printf("Enter number of Columns of Matrix A ( 0 - 10 ) : ");
        scanf("%d", &colsA);
        if (colsA <= 0 || colsA > 10)
            printf("Invalid Input ! ");
    } while (colsA <= 0 || colsA > 10);
    getInput(matrix, rowsA, colsA);

    // Taking inputs form user for Sub-Matrix
    do
    {
        printf("Enter number of Rows of Matrix B ( 0 - %d ) : ", rowsA);
        scanf("%d", &rowsB);
        if (rowsB <= 0 || rowsB > rowsA)
            printf("Invalid Input ! ");
    } while (rowsB <= 0 || rowsB > rowsA);
    do
    {
        printf("Enter number of Columns of Matrix B ( 0 - %d ) : ", colsA);
        scanf("%d", &colsB);
        if (colsB <= 0 || colsB > colsA)
            printf("Invalid Input ! ");
    } while (colsB <= 0 || colsB > colsA);
    getInput(matrixB, rowsB, colsB);

    printf("Matrix A Before Insertion : \n");
    display(matrix, rowsA, colsA);
    printf("\nMatrix B to Insert : \n");
    display(matrixB, rowsB, colsB);
    printf("\n\n");
    do
    {
        printf("Enter index of row from which the Matrix B will be inserted (0 - %d) : ", rowsA - rowsB);
        scanf("%d", &indexRows);
        if (indexRows < 0 || indexRows + rowsB > rowsA)
            printf("Invalid Input ! ");
    } while (indexRows < 0 || indexRows + rowsB > rowsA);
    do
    {
        printf("Enter index of column from which the Matrix B will be inserted (0 - %d): ", colsA - colsB);
        scanf("%d", &indexCols);
        if (indexCols < 0 || indexCols + colsB > colsA)
            printf("Invalid Input ! ");
    } while (indexCols < 0 || indexCols + colsB > colsA);

    // Processing

    insert(matrix, matrixB, rowsA, colsA, rowsB, colsB, indexRows, indexCols);

    // Displaying Output

    display(matrix, rowsA, colsA);

    return 0;
}

void getInput(int a[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter any number for matrix ( %d , %d ) : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int a[][COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        printf("|\t");
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("|\n");
    }
}
void insert(int matrixA[][COLS], int matrixB[][COLS], int rowsA, int colsA, int rowsB, int colsB, int indexRows, int indexCols)
{
    printf("rowsA = %d\ncolsA = %d\nrowsB = %d\ncolsB = %d\nindexRows = %d\nindexCols = %d\n", rowsA, colsA, rowsB, colsB, indexRows, indexCols);
    int countA = 0, countB = 0;
    for (int i = 0; i < rowsA; i++)
    {
        if (indexRows <= i && countA < rowsB)
        {
            for (int j = 0; j < colsA; j++)
            {
                if (indexCols <= j && countB < colsB)
                {
                    matrixA[i][j] = matrixB[countA][countB];
                    countB++;
                }
            }
            countB = 0;
            countA++;
        }
    }
}
