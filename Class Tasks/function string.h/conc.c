#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char str1[30] = "pakistan";
    char str2[30] = " zindabad";

    printf("After concatenation: %s", strcat(str1, str2));

    return 0;
}