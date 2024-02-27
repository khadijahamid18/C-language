#include<stdio.h>
#define SIZE 50
int main()
{
    system("cls");

    int arr[SIZE] = {1, 2, 3, 4 ,5 , 6 , 7, 8 , 9 , 10};
    // for (int i = 0; i < SIZE ; i++)
    // {
    //     arr[i] = rand() % 20 + 1;
    // }
    printf("Array is: \n");
    for (int i = 0; i < SIZE ; i++)
    {
        printf("%d,  ", arr[i]);
    }
    int even[SIZE];
    int odd[SIZE];
    int j = 0, k = 0;
    for (int i = 0; i < SIZE ; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
        }
        else
        {
            odd[k] = arr[i];
        }
    }
    printf("\n\n");
    printf("Even Array is: \n");
    for (int i = 0; i < SIZE ; i++)
    {
        printf("%d,  ", even[i]);
    }
    printf("\n\n");

    printf("Odd Array is: \n");
    for (int i = 0; i < SIZE ; i++)
    {
        printf("%d,  ", odd[i]);
    }
    return 0;
}