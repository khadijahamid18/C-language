#include <stdio.h>
int main()
{
    system("cls");
    char ch, ch1, ch2, ch3, ch4, ch5;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ch1 = ch + 1;
    ch2 = ch1 + 1;
    ch3 = ch2 + 1;
    ch4 = ch3 + 1;
    ch5 = ch4 + 1;

    printf("The next five characters are: %c %c %c %c %c", ch1, ch2, ch3, ch4, ch5);

    return 0;
}