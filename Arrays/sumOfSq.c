// find the sum of squares
#include <stdio.h>
int main()
{
    system("cls");
    int a[10] = {0}, sumOfsquare = 0;
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        sumOfsquare = sumOfsquare + a[i] * a[i];
    }
    printf("Sum of square of array %d ", sumOfsquare);

    return 0;
}