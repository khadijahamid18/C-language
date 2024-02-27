#include <stdio.h>
int main()
{
    system("cls");
    int array[10], small, i;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter 10 array elements: ");
        scanf("%d", &array[i]);
    }
    i = 0;
    small = array[i];
    while (i < 10)
    {
        if (small > array[i])
        {
            small = array[i];
        }
        i++;
    }
    printf("\nSmallest Number: %d\n", small);
    getchar();

    return 0;
}