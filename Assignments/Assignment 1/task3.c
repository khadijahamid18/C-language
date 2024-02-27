#include <stdio.h>

int main()
{
    system("cls");
    int exp;
    int exp2;
    int carry = 0;
    printf("Enter a number: ");
    scanf("%d", &exp);

    printf("Enter 2nd number: ");
    scanf("%d", &exp2);
    
    int num = exp;
    int num2 = exp2;
    int ans = 0;
    int count = 1;

    while (num > 0 || num2 > 0) // do till num greater than  0
    {
        int mod = num % 10;      // split last digit from number
        printf("mod %d\n", mod); // print the digit.
        int mod2 = num2 % 10;    // split last digit from number
        printf("mod2  %d\n", mod2);
        int add = mod + mod2 + carry;
        printf("add %d\n", add);
        if (add > 9)
        {
            carry = 1;
            add %= 10;
            printf("carry %d\n", carry);
            printf("add %d\n", add);
        }
        else
        {
            carry = 0;
            printf("%d\n", carry);
        }
        ans += (add * count);

        printf("ans  %d\n", ans); 
        count *= 10;
        num = num / 10;
        num2 = num2 / 10;
        printf("citeratiin complete \n"); // divide num by 10. num /= 10 also a valid one
    }
    ans = ans + (carry * count);
    printf("  %d\n", exp);
    printf("+ %d\n", exp2);
    printf("------- \n");
    printf("%d\n", ans);
    return 0;
}