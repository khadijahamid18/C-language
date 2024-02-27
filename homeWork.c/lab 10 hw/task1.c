#include <stdio.h>
#include <math.h>
void printArray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("|\t");
        for (int j = 0; j < 3; j++)
        {
            // printf("The elements of 2D array: ");
            printf("%d\t", arr[i][j]);
        }
        printf("|\n");
    }
}
void average(int arr[][3])
{
    int sum = 0;
    int count = 0;
    double average = 0.0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
            count++;
        }
        printf("\n");
    }
    average = sum / count;
    printf("The average of the integers are: %.2lf", average);
}
void squareRoot(int arr[][3])
{
    int sum = 0;
    int squareRoot = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            sum = sum + (arr[i][j] * arr[i][j]);
        }
    }
    squareRoot = sqrt(sum);
    printf("\nSquare root of sum of squares = %d\n", squareRoot);
}
int findNum(int arr[][3], int num)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == num)
            {
                return 1;
            }
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    system("cls");
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of 2D array of %d - %d are: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printArray(arr);
    average(arr);
    squareRoot(arr);
    int num = 0;
    printf("Enter the number you want to find: ");
    scanf("%d", &num);
    int find = findNum(arr, num);
    if (find == 1)
    {
        printf("The number exists");
    }
    else
    {
        printf("The number does not exists");
    }

    return 0;
}
