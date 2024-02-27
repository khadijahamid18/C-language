#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void randInput(int *p);
void readThemAll(int *p, int a, int b);
void display(const int *p);
int numberExistence(int *arr, int num, int *index);
int main()
{
    system("cls");

    int array[SIZE];
    int num1, num2;
    int numberFlag = 0;
    int start, end;
    num1 = num2 = start = end = 0;

    // Initializing array with random number and printing it

    randInput(array);
    printf("Initialized Array : \n\n");
    display(array);
    printf("\n\n");

    // Taking inputs from user

    do
    {
        do
        {
            printf("Enter starting number : ");
            scanf("%d", &num1);
            numberFlag = numberExistence(array, num1, &start);
            if (numberFlag == 0)
            {
                printf("Number does not exist in Array ! ");
            }

        } while (numberFlag == 0);
        numberFlag = 0;
        do
        {
            printf("Enter ending number : ");
            scanf("%d", &num2);
            numberFlag = numberExistence(array, num2, &end);
            if (numberFlag == 0)
            {
                printf("Number does not exist in Array ! ");
            }

        } while (numberFlag == 0);
        if (start > end)
        {
            printf("Starting and Ending number are not given correctly and may be start number is after the ending number ! Please enter any other input .\n");
        }

    } while (start > end);

    // Processing

    printf("Numbers between the Given range : \n");
    readThemAll(array, start + 1, end); // added one in index start to not show the starting number

    // Displaying Output

    return 0;
}
void randInput(int *p)
{
    srand(time(0));
    for (int i = 0; i < SIZE; i++)
    {
        *(p + i) = rand();
    }
    *(p + SIZE - 1) = '\0';
}
void display(const int *p)
{
    int i = 0;
    while (*(p + i) != 0)
    {
        printf("%d\t", *(p + i));
        i++;
    }
}
void readThemAll(int *p, int a, int b)
{
    for (int i = a; i < b; i++)
    {
        printf("%d\t", *(p + i));
    }
    printf("\n");
}
int numberExistence(int *arr, int num, int *index)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (*(arr + i) == num)
        {
            *index = i;
            return 1;
        }
    }
    return 0;
}
