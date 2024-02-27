#include <stdio.h>
int main()
{
    system("cls");
    int counter = 0;
    double sum = 0;
    double marks = 0;
    do
    {
        printf("Enter the marks, -1 as a sentinel value: ");
        scanf("%lf", &marks);
        sum += marks;
        counter++;
    } while (marks >= 0);

    printf("Average marks %lf \n", (sum + 1) / (counter - 1));

    return 0;
}