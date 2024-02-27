#include <stdio.h>
int main()
{
    system("cls");
    int month = 12, year = 0, is_ok = 0;
    float inches, sum = 0, counter = 0;
    while (is_ok)
    {
        printf("Enter number of year: ");
        scanf("%d", &year);

        if (year > 0)
        {
            for (int i = 0; i < year; i++)
            {
                for (int j = 0; j < month; j++)
                {
                    printf("Enter the inches of rainfall in %d month of %d years: ", j);
                    scanf("%f", &inches);
                    if (inches >= 0)
                    {
                        sum = sum + inches;
                        counter++;
                    }
                    else
                    {
                        printf("Error: Invalid output entered\n");
                        j--;
                    }
                }
            }
            is_ok = 1;
        }
        else
        {
            printf("Number of years should'nt be less then 1 !!! \n");
        }
    }
    printf("Total number of months: %f\n", counter);
    printf("Total inches of rainfall are: %f\n", sum);
    printf("Average rainfall per month is: %f\n", sum / counter);

    return 0;
}