#include <stdio.h>
#include<string.h>
int main()
{
    system("cls");
    char str1[30] = "pakistan";
    char str2[30];
    strcpy(str2, str1);
    printf("After copy: %s", str2 );

    return 0;
}