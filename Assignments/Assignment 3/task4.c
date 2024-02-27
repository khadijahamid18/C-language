#define SIZE 3
int getTotal(int rows, int cols, int arr[][SIZE])
{
    int x = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            x += arr[i][j];
        }
    }
    printf("\nSum of all elements of 2D array is: %d\n", x);
    return x;
}

float getAverage(int rows, int columns, int arr[][SIZE])
{
    int sum = 0;
    float average = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    average = sum / (rows * columns);
    printf("\nAverage of all the elements of the 2D array is: %.2f", average);
}

void getRowTotal(int array[][SIZE], int r, int c)
{
    int i, j;
    int sumOfRow = 0;
    printf("\n\n");
    for (i = 0; i < r; i++)
    {
        sumOfRow = 0;
        for (j = 0; j < c; j++)
        {
            sumOfRow += array[i][j];
        }
        printf("Sum of %d.row: %d\n", i + 1, sumOfRow);
    }
}

void getColumnTotal(int array[][SIZE], int r, int c)
{
    int i, j;
    int sumOfCols = 0;
    printf("\n\n");
    for (j = 0; j < r; j++)
    {
        sumOfCols = 0;
        for (i = 0; i < c; i++)
        {
            sumOfCols += array[i][j];
        }
        printf("Sum of %d column: %d\n", j + 1, sumOfCols);
    }
}

int getHighestInRow(int arr[][SIZE])
{
    printf("\n\n");
    for (int i = 0; i < SIZE; i++)
    {
        int max = arr[i][0];
        for (int j = 1; j < SIZE; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
        printf("Largest element in the row %d is: %d \n", i, max);
    }
}

int getLowestInRow(int arr[][SIZE])
{
    printf("\n\n");
    for (int i = 0; i < SIZE; i++)
    {
        int min = arr[i][0];
        for (int j = 1; j < SIZE; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
        printf("Smallest element in the row %d is: %d \n", i, min);
    }
}

int main()
{
    system("cls");
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Please enter values of array [%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nElements in 2D array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    getTotal(SIZE, SIZE, arr);
    getAverage(SIZE, SIZE, arr);
    getRowTotal(arr, SIZE, SIZE);
    getColumnTotal(arr, SIZE, SIZE);
    getHighestInRow(arr);
    getLowestInRow(arr);

    return 0;
}