#include <stdio.h>
int main()
{
    system("cls");
    int n = 0;
    int sum = 0, cube;
    printf("Enter any positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        sum = sum + i * i * i;
    }
    printf("Sum of cube of integer: %d", sum);

    return 0;
}