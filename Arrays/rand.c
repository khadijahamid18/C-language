#include <stdlib.h> // for rand() and srand()
#define SIZE 100
int main()
{
    system("cls");
    srand(time(0)); // To make rand() as the real random number generator
    int arr[SIZE];
    int num = 0, flag = 0, i = 0;
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = rand();
    }
    for (i = 0; i < SIZE; i++) 
    {
        printf(arr[i]);
    }
    
    printf("\nPlease enter the positve number ");
    scanf("%d", &num);
    for (i = 0; i < SIZE; i++) // linear search
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Congratulations!, we found the integer at %d", i);
    }
    else
    {
        printf("Sorry number is not found!");
    }
    return 0;
}

// // Linear Search / Guess Game using random function rand()
// #include <stdio.h>
// #include<stdlib.h>             // for rand and srand
// #include<time.h>
// #define SIZE 100
// int main()
// {
//     system("cls");
//     srand(time(0));               // to make rand as real random generator
//     int arr[SIZE] = {0}, flag = 0, num = 0;
//     for (int i = 0; i < SIZE; i++)
//     {
//         arr[i] = rand();
//     }
//     printf("Enter any positive integer: ");
//     scanf("%d", &num);

//     for (int i = 0; i < SIZE; i++)
//     {
//         if (arr[i] == num)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("Congratulations you have found the number!!!");
//     }
//     else
//     {
//         printf("Sorry you have not found the number!");
//     }

//     return 0;
// }