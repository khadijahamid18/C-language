#include <stdio.h>
#include<ctype.h>
int main()
{
    system("cls");
    char c;
    printf("Please enter a letter: ");
    scanf("%c", &c);
    if (isalpha(c) == 0)
    {
        printf("%c is not a letter.",c);
    }
    else
    {
        printf("%c is a letter.",c);
    }

    return 0;
}
