#include <stdio.h>
#include <string.h>
#define SIZE 50
int main()
{
    system("cls");
    char str1[SIZE], str2[SIZE];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("\nBoth strings you entered are same!");
    }
    else
    {
        printf("\nEntered strings are not same!");
    }
    printf("\n");
    int count = 0, i;
    // if(strlen(str1)==strlen(str2))
    // {
    // 	for( i = 0; str2[i]!='\0';i++)
    //     {
    //     	if(str1[i] == str2[i])
    //     	count++;
    //     }
    //     if(count == i)
    //       printf("strings are equal");
    //     else
    //       printf("strings are not equal");
    // }
    if (strlen(str1) == strlen(str2))
    {
        printf("Both strings are equal in length");
    }
    else if (strlen(str1) > strlen(str2))
    {
        printf("\nFist string is greater then the 2nd one");
    }
    else if (strlen(str1) < strlen(str2))
    {
        printf("\nSecond string is greater then the 1st one");
    }

    return 0;
}
