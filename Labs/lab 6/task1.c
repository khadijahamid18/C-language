#include <stdio.h>
int maximum();
int main()
{
    system("cls");
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    if (maximum(x, y))
    {
        printf("%d\n", x);
        printf("\n", y);
    }
    else
    {
        printf("%d", y);
        printf("\n", x);
    }

    return 0;
}
int maximum(int x, int y)
{
    if (x > y)
    {
        printf("%d", x);
        printf("\n");
    }
    else if (y > x)
    {
        printf("%d", y);
        printf("\n");
    }
}
