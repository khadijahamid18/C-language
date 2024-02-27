#include <stdio.h>
int population(int p, int b, int d)
{
    int bp = b * p;
    int dp = d * p;
    int num = 1;
    int n = (p * b * p) - (d * p);
    return n;
}
int main()
{
    system("cls"); 
    int totel;
    int birthRate, deathRate, noOfYears, pop;
    do
    {
        printf("Enter the number of years: ");
        scanf("%d", &noOfYears);
        if (noOfYears <= 1)
        {
            printf("Invalid Input\n");
            printf("Enter the number of years: ");
            scanf("%d", &noOfYears);
        }
    } while (noOfYears <= 1);
    for (int i = 0; i < noOfYears; i++)
    {
        do
        {
            printf("Enter the birth rate: ");
            scanf("%d", &birthRate);
            if (birthRate < 0)
            {
                printf("Invalid Input\n");
                printf("Enter the birth rate: ");
                scanf("%d", &birthRate);
            }

        } while (birthRate < 0);

        do
        {
            printf("Enter the death rate: ");
            scanf("%d", &deathRate);
            if (deathRate < 0)
            {
                printf("Invalid Input\n");
                printf("Enter the death rate: ");
                scanf("%d", &deathRate);
            }
        } while (deathRate < 0);
        do
        {
            printf("Enter the size of population: ");
            scanf("%d", &pop);
            if (pop <= 2)
            {
                printf("Invalid Input\n");
                printf("Enter the size of population: ");
                scanf("%d", &pop);
            }

        } while (pop <= 2);
        totel = population(pop, birthRate, deathRate);
        printf("%d\n", totel);
    }
    return 0;
}
