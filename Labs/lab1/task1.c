// sum of numbers
#include <stdio.h>
int main()
{
    system("cls");
    int x;
    int y;
    int sum;

    printf("Please enter first number:  ");
    scanf("%d", &x);
    printf("Please enter second number:  ");
    scanf("%d", &y);

    sum = x + y;

    printf("Sum of entered numbers: ");
    printf("%d", sum);

    

    return 0;
}