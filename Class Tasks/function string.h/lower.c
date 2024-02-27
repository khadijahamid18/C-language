#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char arr[30];
    char arr2[30];
    printf("Please enter any string in UPPER CASE: ");
    gets(arr);
    printf("String to upper case: %s", strlwr(arr));

    return 0;
}