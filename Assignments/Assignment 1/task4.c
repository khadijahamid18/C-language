#include <stdio.h>

int main()
{
    system("cls");
    int exp;
    int exp2;
    int carry = 0;
    printf("Enter first binary number: ");
    scanf("%d", &exp); 
    printf("Enter second binary number: ");
    scanf("%d", &exp2);
    int num = exp;
    int num2 = exp2;
    int ans = 0;
    int count = 1;

    while (num > 0 || num2 > 0) // do till num greater than  0
    {
        int mod = num % 10; // split last digit from number

        int mod2 = num2 % 10; // split last digit from number

        int add = mod + mod2 + carry;

        if (add == 3)
        {
            carry = 1;
            add = 1;
        }
        else if (add == 2)
        {
            carry = 1;
            add = 0;
        }
        else if (add == 1)
        {
            carry = 0;
            add = 1;
        }
        else
        {
            carry = 0;
            add = 0;
        }
        ans += (add * count);

        count *= 10;
        num = num / 10;
        num2 = num2 / 10;
    }
    ans = ans + (carry * count);
    printf("  %d\n", exp);
    printf("+ %d\n", exp2);
    printf("------- \n");
    printf("%d\n", ans);
    return 0;
}

