#include <stdio.h>
#include<ctype.h>
int main()
{
    system("cls");
    char c;
    printf("Please enter a digit or a letter: ");
    scanf("%c", &c);
    if (isalnum(c) == 0)
    {
        printf("%c is not a digit or a letter.",c);
    }
    else
    {
        printf("%c is a digit or a letter.",c);
    }

    return 0;
}
