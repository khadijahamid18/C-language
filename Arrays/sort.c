#include <stdio.h>
#include <time.h>   // for time(0)
#include <stdlib.h> // for rand() and srand()
#define SIZE 100
void fun1(int[], int);
int main()
{
    system("cls");
    srand(time(0));
    int array[10];
    fun1(array, 10);
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
        printf("%d ,", array[i]);
    }
    return 0;
}
void fun1(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        a[i] = rand() % 100; // populate the array with numbers between 0-> 99
    }
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define SIZE 100
// int main()
// {
//     system("cls");
//     srand(time(0));
//     int array[10];

//     func1(array, 10);
//     int temp;
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (array[i] > array[j])
//             {
//                 temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     printf("After aplying sorting \n");
//     printf("Array in ascending order");

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", array[i]);
//     }

//     return 0;
// }
// void func1(int a[], int s)
// {
//     for (int i = 0; i < s; i++)
//     {
//         a[i] = rand() % 100;
//     }
// }