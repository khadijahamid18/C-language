// compare two arrays
#include <stdio.h>
int main()
{
    system("cls");
    int a[5], b[5];
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter the %d elements of array 1: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d elements of array 2: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == b[i])
        {
            printf("Both arrays are same");
            break;
        }
        else
        {
            printf("Both arrays are not same");
            break;
        }
    }

    return 0;
}