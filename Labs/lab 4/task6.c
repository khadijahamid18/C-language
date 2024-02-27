#include <stdio.h>
int main()
{
    system("cls");
    int dec = 0;
    int base = 1;
    int digit = 0;
    digit = 0;
    dec = 0;
    base = 1;
    printf("Enter a Base - 7 digit:");
    scanf("%d", &digit);
    while (digit > 0)
    {
        dec = dec + digit * base;
        base = base * 7;
        printf("Enter a Base - 7 digit:");
        scanf("%d", &digit);
    }
    printf("The equivalent number in Base-10 is: %d \n", dec);

    return 0;
}