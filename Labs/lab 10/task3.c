#include <stdio.h>
#define SIZE 5
void copyIntArray(int *dest[], const int *src[], int size)
{
    int i = 0;
    while (i < size)
    {
        *(dest + i) = *(src + i);
        i++;
    }
}
int main()
{
    system("cls");
    int arr1[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE];

    copyIntArray(arr2, arr1, SIZE); 

    printf("After copying array: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}