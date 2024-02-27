#include <stdio.h>
int main()
{
    system("cls");
    int x, y;
    int swap;

    printf("Enter first integer: ");
    scanf("%d", &x);

    printf("Enter second integer: ");
    scanf("%d", &y);

    printf("After swap\n");

    swap = y;
    y = x;

    printf("Enter first integer: %d", x);

    printf("\nEnter second integer: %d", y);

    return 0;
}