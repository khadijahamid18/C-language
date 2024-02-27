// Program to search and print substring reamining portions for 2 time
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
    system("cls");
    char string1[SIZE];
    char string2[SIZE];
    int temp1 = 0;
    int temp2 = 0;

    printf("Enter any String : ");
    gets(string1);
    printf("Enter any string to find that and print remaining string : ");
    gets(string2);
    char *fistString = strstr(string1, string2);
    char *secondString = strstr(fistString + 1, string2);

    printf("Remaining String after first occurance : %s\n", fistString);
    printf("Remaining String after second occurance : %s\n", secondString);

    return 0;
}