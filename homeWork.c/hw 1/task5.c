// age in minutes
#include <stdio.h>
int main()
{
    system("cls");
    float purchase;
    float pur, federal, provincial, totaltax, totalSale;

    printf("Please enter amount of purchase: ");
    scanf("%f", &purchase);

    printf(" The amount of purchase is: ");
    printf("%f", purchase);

    federal = purchase * 0.06;
    printf("\n The amount of the federal sale tax is  %f", federal);
    printf("\n");

    provincial = purchase * 0.04;
    printf("The amount of the provincial sale tax is %f", provincial);
    printf("\n");

    totaltax = federal + provincial;
    printf("The amount of the total sale tax is %f", totaltax);

    totalSale = purchase + totaltax;
    printf("\n The amount of total sale tax is : %f", totalSale);

    return 0;
}
