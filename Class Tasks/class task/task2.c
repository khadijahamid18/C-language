#include <stdio.h>
int main()
{
    system("cls");
    int amount, discount, payable;
    printf("Please enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 5000)
    {
        discount = amount * 0.15;
        printf("\nDiscount price: %d", discount);
        payable = amount - discount;
        printf("\nThe payable price is:  %d", payable);
    }
    else
    {
        discount = amount * 0.10;
        printf("\nDiscount price: %d", discount);
        payable = amount - discount;
        printf("\nThe payable price is:  %d", payable);
    }

    return 0;
}