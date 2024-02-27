#include <stdio.h>
#include<ctype.h>
int main()
{
    system("cls");
    char c;
    printf("Please enter a letter in lower case: ");
    scanf("%c", &c);
    if (islower(c) == 0)
    {
        printf("%c is not in lower case.",c);
    }
    else
    {
        printf("%c is in in lower case.",c);
    }

    return 0;
}
