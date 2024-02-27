#include <stdio.h>
int main()
{
    system("cls");
    int x, y, z;
    printf("Enter first integer: ");
    scanf("%d", &x);

    printf("Enter second integer: ");
    scanf("%d", &y);

    printf("Enter third integer: ");
    scanf("%d", &z);

    printf("Original Numbers: ");
    printf("\nSorted Numbers: ");

    if (x <= z && z <= y)
    {
        printf("%d, %d, %d", x, y, z);
    }
    else if (y <= x && x <= z)
    {
        printf("%d, %d, %d", y, x, z);
    }
    else if (y <= z && z <= x)
    {
        printf("%d, %d, %d", y, z, x);
    }
    else if (z <= x && x <= y)
    {
        printf("%d, %d, %d", z, x, y);
    }
    else if (x == y && y == z)
    {
        printf("%d, %d, %d", x, y, z);
    }
    else
    {
        printf("%d, %d, %d", z, y, x);
    }


    return 0;
}