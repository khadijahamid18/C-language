#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char str1[30];
    char str2[30];
    printf("Please enter first word: ");
    gets(str1);
    printf("Please enter second word: ");
    gets(str2);

    printf("After concatenation: %s\n", strcat(str1, str2));

    return 0;
}