#include <stdio.h>
#include<ctype.h>
int main()
{
    system("cls");
    char c;
    printf("Please enter a digit: ");
    scanf("%c", &c);
    if (isdigit(c) == 0)
    {
        printf("%c is not a digit.",c);
    }
    else
    {
        printf("%c is a digit.",c);
    }

    return 0;
}
