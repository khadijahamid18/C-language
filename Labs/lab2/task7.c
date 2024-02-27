#include <stdio.h>
int main()
{
    system("cls");
    float price = 59.95, discount, sale;

    printf("Regular price: ");
    printf("%f", price);

    discount = price * 0.2;

    printf("\nDiscount amount: ");
    printf("%f", discount);

    sale = price - discount;

    printf("\nSale price: %f", sale);

    return 0;
}