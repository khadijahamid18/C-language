#include <stdio.h>
#define SIZE 5
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}
void addArrays(const int *a1, const int *a2, int *sum, int size)
{
    for (int i = 0; i < size; i++)
    {
        sum[i] = a1[i] + a2[i];
    }
    printf("Elements stored in third array are\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", sum[i]);
    }
}
int main()
{
    system("cls");
    int arr1[SIZE], arr2[SIZE], sum[SIZE];
    printf("First Array\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter elements of array 1: ");
        scanf("%d", &arr1[i]);
    }
    display(arr1, 10);
    printf("Second Array\n ");
    for (int j = 0; j < SIZE; j++)
    {
        printf("Enter elements of array 2: ");
        scanf("%d", &arr2 [j]);
    }
    display(arr2, 10);
    addArrays(&arr1, &arr2, &sum, 10);

    return 0;
}