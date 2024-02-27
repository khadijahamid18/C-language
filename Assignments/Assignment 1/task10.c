#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int a, d1, count = 1; // for 1 series

    printf("Enter First number of seris 1: ");
    scanf("%d", &a);

    printf("Enter the difference of series 1: ");
    scanf("%d", &d1);

    int temp1; // for convenience

    temp1 = a;

    while (count <= 10)
    {
        printf("%d, ", a);
        a = a + d1;
        count++;
    }

    int b, d2, counter = 1; // for 2 series

    printf("\n\nEnter first number of series 2: ");
    scanf("%d", &b);

    printf("Enter the difference of series 2: ");
    scanf("%d", &d2);

    int temp2; // for convenience
    temp2 = b;

    while (counter <= 10)
    {
        printf("%d, ", b);
        b = b + d2;
        counter++;
    }

    int num = 0, i = 1, crossNum = 0, index = 0; // entering any number from series 1

    printf("\n\nEnter any number from series 1: ");
    scanf("%d", &num);

    if (num == temp1)      // temp1 is series 1
    {
        printf("The corresponding number is: %d", temp2);
    }

    else
    {

        index = num - temp1; // finding position of
        index = index / d1;   // number entered       
        

        crossNum = temp2 + d2;

        while (i < index)
        {
            crossNum = crossNum + d2; // calculating corresponding number
            i++;
        }

        printf("The corresponding number is: %d", crossNum);
    }
    return 0;
}