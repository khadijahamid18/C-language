// Linear Search / Guess Game
#include <stdio.h>
#define SIZE 100
int main()
{
    system("cls");
    int arr[SIZE] = {0}, flag = 0, num = 0;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    printf("Enter any positive integer: ");
    scanf("%d", &num);

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Congratulations you have found the number!!!");
    }
    else
    {
        printf("Sorry you have not found the number!");
    }

    return 0;
}