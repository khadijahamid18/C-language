#include <stdio.h>
int valid(int num);
int getSale(int sale);
void highest(int division1, int division2, int division3, int division4); 

int main()
{
    system("cls");
    int division1 = 0, division2 = 0, division3 = 0, division4 = 0; 
    division1 = getSale(division1);
    division2 = getSale(division2);
    division3 = getSale(division3);
    division4 = getSale(division4);

    highest(division1, division2, division3, division4);
    return 0;
}
int getSale(int sale)
{
    printf("Please enter the quarter sale figure: "); 
    scanf("%d", &sale);
    sale = valid(sale);
    return sale;
}
int valid(int num)
{
    while (num < 0)
    {
        printf("Invalid.....Please Enter sale again: ");
        scanf("%d", &num);
    }
    return num;
}
void highest(int D1, int D2, int D3, int D4)
{
    if (D1 > D2 && D1 > D3 && D1 > D4)
    {
        printf("Division 1  have highest quarter sale figure which is: %d", D1);
    }
    if (D2 > D1 && D2 > D3 && D2 > D4)
    {
        printf("Division 2  have highest quarter sale figure  which is: %d", D2);
    }
    if (D3 > D1 && D3 > D2 && D3 > D4)
    {
        printf("Division 3   have highest quarter sale figure  which is: %d", D3);
    }
    if (D4 > D1 && D4 > D2 && D4 > D3)
    {
        printf("Division 4  have highest quarter sale figure  which is: %d", D4);
    }
}