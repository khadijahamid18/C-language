#include <stdio.h>
void square(int *a)
{
    *a = *a * *a;
}
int main()
{
    system("cls");
    int x = 5, y = 0;
    square(&x);
    printf("%d", x);

    return 0;
}