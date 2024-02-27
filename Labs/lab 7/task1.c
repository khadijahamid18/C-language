#include <stdio.h>
isPalindrome(int number)
{
    int toCheck = number;
    int remainder;

    int reversedNumber = 0;

    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    if (toCheck == reversedNumber)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    system("cls");
    int number;

    printf("Please Enter a Five Digit Number:");
    scanf("%d", &number);

    printf("%d", isPalindrome(number));

    return 0;
}