// Program to find string length using a function
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int length(const char *p);
int main()
{
    system("cls");
    char arr[200];
    int num;
    printf("Enter any text : ");
    for (int i = 0; i < 200; i++)
    {
        arr[i] = getchar();
        if (arr[i] == 10)
        {
            arr[i] = '\0';
            break;
        }
    }

    // Processing

    num = length(arr);

    // Displaying Output

    printf("Length of array = %d", num);

    return 0;
}
int length(const char *arr)
{
    int i = 0;
    while (*(arr + i) != 0)
    {
        i++;
    }
    return i;
}