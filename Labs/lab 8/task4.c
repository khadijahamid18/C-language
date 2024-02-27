// sort the array in descending order (smallest to largest)
#include <stdio.h>
#define size 10
int main()
{
    system("cls");
    int a[size], temp = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Enter the array elements: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Elements in descending order: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}