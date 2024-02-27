#include <stdio.h>
int main()
{
    system("cls");
    int first = 0, end = 0;
    do
    {
        printf("Enter starting integer: ");
        scanf("%d", &first);
        if (first <= 0)
        {
            printf("Invalid Input!");
        }

    } while (first <= 0);

    do
    {
        printf("Enter ending integer: ");
        scanf("%d", &end);
        if ((end <= 0) || (end < first))
        {
            printf("Invalid Input!");
        }

    } while ((end <= 0) || (end < first));

    for (int i = first; i <= end; i++)
    {
        for (int j = i; j <= end; j++) 
        {  
            printf("(%d, %d)", i, j);
        }
        printf("\n");
        end--;
        first--;
    }

    return 0;
}