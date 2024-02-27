#include <stdio.h>
#include <string.h>
#define SIZE 50
int main()
{
    system("cls");
    char str1[SIZE];
    char str2[SIZE];

    printf("Please enter the first string: ");
    gets(str1);

    printf("Please enter the second string: ");
    gets(str2);

    int num;
    printf("Please enter the number of characters you want to be displayed on your screen: ");
    scanf("%d", &num);

    int ans = strncmp(str1, str2, num);

    if (ans == 0)
    {
        printf("Both strings are equal.");
    }
    else if (ans > 0)
    {
        printf("First string till n number of charcters is greater than second string.");
    }
    else if (ans < 0)
    {
        printf("First string till n number of charcters is less than second string.");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}