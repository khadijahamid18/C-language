#include <stdio.h>
#define SIZE 5
int oddSum(int array[], int start, int end)
{
    static int sum = 0;
    if (start <= end)
    {
        if (array[start] % 2 == 1)
        {
            sum = sum + array[start];
        }
        start = start + 1;
        oddSum(array, start, end);
    }
    return sum;
}
int main()
{
    system("cls");
    int array[SIZE];
    for (int i = 0; i < SIZE; i++) 
    {
        array[i] = i + 1;
    }
    printf("Sum of odd elements is: %d", oddSum(array, 0, SIZE - 1));
}