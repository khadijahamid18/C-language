// annual profit
#include <stdio.h>
int main()
{
    system("cls");
    int x, y;
    printf("Enter annual sale: ");
    scanf("%d", &x);
    y = x * 0.013;
    printf("Annual profit is:  ");
    printf("%d", y);

    return 0;
}