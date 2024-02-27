#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>   // for time(0)
#include <stdlib.h> // for rand() and srand()
#define SIZE 10
void getInput(int[], int);
int main()
{
    system("cls");
    srand(time(0));
    int array[SIZE];
    getInput(array, 10);
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("After applying Selection Sort: ");
    printf("\nArray in asending order: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
void getInput(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        a[i] = rand() % 6 ; // populate the array with numbers between 0-> 99
    }
}