#include <stdio.h>
int main()
{
    system("cls");
    int divident;
    int divisor;
    int carry = 0;
    
    printf("enter divident: ");
    scanf("%d", &divident);

    printf("enter divisor: ");
    scanf("%d", &divisor);

    int i = 1;
    while (1)
    {
        if ((divisor * i) > divident)
        {
            break;
        }
        i++;
    }

    printf("***** Result Card******\n");
    printf("Quotent %d\n", i - 1);
    printf("remainder %d\n", divident - (divisor * (i - 1)));
    return 0;
}
