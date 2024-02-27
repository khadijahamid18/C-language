#include <stdio.h>
int main()
{
    system("cls");
    int counter = 0, digit, num;
    int num1 = num;
    printf("Enter enter a digit: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        switch (digit)
        {
        case 7:
            counter = counter + 1;
            break;

        default:
            counter = counter + 0;
            break;
        }
    }
    printf("%d Inter contains %d 7s", num1, counter);

    return 0;
}