#include <stdio.h>
int mystery(int a, int b)
{
    if (a < 1)
    {
        printf("Base Case : (%d, %d)\n", a, b);
        return b;
    }
    else
    {
        printf("( %d, %d )\n", a, b);
        int temp = mystery(a - 4, b + 5);
        printf("%d\n", temp);
        return temp + 4;
    }
}
int main()
{
    system("cls");
    int num = mystery(7, 6);
    printf("Main: %d\n", num);

    return 0;
}