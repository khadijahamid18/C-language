#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxSize 60
   
int main()
{
    system("cls");
    FILE *ptr, *cptr, *cfptr;
    char file1[20], file2[20], file3[50];

    printf("Enter name of 1st file : ");
    scanf("%s", file1);
    printf("Enter name of 2nd file : ");
    scanf("%s", file2);
    printf("Enter name of 3rd file : ");
    scanf("%s", file3);

    ptr = fopen(file1, "r");
    cptr = fopen(file2, "r");
    cfptr = fopen(file3, "w");

    char ch;
    if (cfptr == NULL)
    {
        printf("FILE not open");
    }
    if (ptr == NULL)
    {
        printf("FILE not open");
    }

    if (cptr == NULL)
    {
        printf("FILE not open");
    }

    while ((ch = fgetc(ptr)) != EOF)
    {
        fputc(ch, cfptr);
    }
    while ((ch = fgetc(cptr)) != EOF)
    {
        fputc(ch, cfptr);
    }

    fclose(ptr);
    fclose(cptr);
    fclose(cfptr);
    return 0;
}