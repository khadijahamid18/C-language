#include <stdio.h>
int main()
{
    system("cls");
    int l = 0;
    int size;
    do
    {
        printf("Please enter the size of pattern to be printed: ");
        scanf("%d", &size);
        if ((size % 2 != 0) || (size <= 2))
        {
            printf("Invalid Input\n");
            printf("Please enter the size of pattern to be printed again: ");
            scanf("%d", &size);
        }

    } while ((size % 2 != 0) || (size <= 2));

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < i; j++)
        {
            printf("0");
        } 
        for (int k = 0; k < size - l; k++)                 
        {
            printf("1");
        }
        l++;
        printf("\n");
    }
    return 0;
}