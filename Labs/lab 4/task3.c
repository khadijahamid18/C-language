#include <stdio.h>
int main()
{
    system("cls");
    int large, slarge, num;
    int count;
    int i = 0;
    printf("Enter the numbers of inputs (>=2) : ");
    scanf("%d", &count);
    while (count < 2)
    {
        printf("Invalid!!\n");
        printf("Enter the numbers of inputs (>=2) : ");
        scanf("%d", &count);
    }
    printf("Enter a number %d: ", i + 1);
    scanf("%d", &num);
    large = num;
    i++;
    // large contains larger number among two input
    // slarge contains the second larger number
    
    // get the larger and second larger number among all inputs
    while (i < count)
    {
        printf("Enter a number %d :", i + 1);
        scanf("%d", &num);
        if (num > large)
        {
            slarge = large;
            large = num;
        }
        else if (num > slarge) // && i != 1 )
        {
            // printf("else if (num > slarge && i != 1)");
            slarge = num;
        }
        i++;
    }
    printf("Largest Number %d\n", large);
    printf("Second Largest Number %d\n", slarge); 

    return 0;
}

