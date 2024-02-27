#include <stdio.h>
#include<string.h>
#define SIZE 100
void strcpy(char *array1, const char *array2)
{
    int count = 0;
    for (int i = 0; array2[i] != '\0'; i++)
    {
        *(array1 + i) = *(array2 + i);
        count++;
    }
    array1[count] = '\0';
}
void strccpy(char array1[], const char array2[])
{
    int count = 0;
    for (int i = 0; array2[i] != '\0'; i++)
    {
        *(array1 + i) = *(array2 + i);
        count++;
    }
    array1[count] = '\0';
}
char strcat(char *string1, const char *string2)
{
    int count = 0;
    int i = 0;
    while (*(string1 + i) != '\0')
    {
        count++;
        i++;
    }
    for (int i = 0; i < string2[i]; i++)
    {
        *(string1 + count + i) = *(string2 + i);
    }
    return string1;
}
char strccat(char string1[], const char string2[])
{
    int count = 0;
    int i = 0;
    while (*(string1 + i) != '\0')
    {
        count++;
        i++;
    }
    for (int i = 0; i < string2[i]; i++)
    {
        string1[i + count] = string2[i];
    }
    return string1;
}
int main()
{
    system("cls");
    char array1[SIZE] = {0};
    const char array2[SIZE];
    printf("Enter any string: ");
    gets(array2);
    strccpy(array1, array2);
    printf("The copied string using array is %s\n", array1);
    strcpy(array1, array2);
    printf("The copied string using pointerr is %s\n", array1);
    char string1[SIZE] = {0};
    const char string2[SIZE];
    printf("Enter string 1: ");
    gets(string1);
    printf("Enter string 2: ");
    gets(string2);
    strcat(string1, string2);
    printf("Concatenated String using array: %s\n", string1);
    printf("Concatenated String using pointer: %s\n", string1);
    // strcat(string1, string2);
    // printf("Concatenated String: %s\n", string1);

    // concate(string1, string2);
    // concat(string1, string2);

    return 0;
}
