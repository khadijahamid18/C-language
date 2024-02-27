#include <stdio.h>
int main()
{
    system("cls");
    int num1, num2, num3, num4, num5, differece;
 
    printf("Enter the first number of series: ");
    scanf("%d", &num1);

    printf("The difference in consecutive numbers : ");
    scanf("%d", &differece);

    num2 = num1 + differece;
    num3 = num2 + differece;
    num4 = num3 + differece;
    num5 = num4 + differece;

    printf("The first 5 number of series are : %d,%d,%d,%d,%d", num1, num2, num3, num4, num5);

    return 0;
}