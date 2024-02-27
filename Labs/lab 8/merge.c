#include <stdio.h>
#define n1 5
#define n2 10
#define n3 15
int main()
{
    system("cls");
    int temp;
    int a[n1], b[n2], c[n3];

    for (int i = 0; i < 5; i++)
    {
        printf("Please enter the %d element of array 1: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter the %d element of array 2: ", i + 1);
        scanf("%d", &b[i]);
    }
    c[15] = a[5] + b[10];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    printf("Merge array is: \n");
    for (int i = 0; i < n3; i++)
    {
        printf("%d\t", c[i]);
    }

    for (int i = 1; i < n3; i++)
    {
        for (int j = 0; j < (n3 - i); j++)
        {
            if (c[j] > c[j + 1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    printf("\nArray after bubble sort: \n");
    for (int i = 0; i < n3; i++)
    {
        printf("%d\t", c[i]);
    }

    return 0;
}