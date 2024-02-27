// copy the array
#include <stdio.h>
int main()
{
    system("cls");
    int a[100] = {0};
    int b[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = b[i];
    }
    printf("Elements of b[5] are: %d", b[5]);

    return 0;
}