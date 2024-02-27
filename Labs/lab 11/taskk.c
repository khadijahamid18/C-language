#include <stdio.h>
#include <ctype.h>
#define SIZE 200
int printDigit(int *digitArray, int size)
{
    printf("Copy the digits: ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", *(digitArray + i));
    }
}
void printuppercase(const char *a, int size)
{
    printf("Alphabet and spaces in an array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", toupper(*(a + i)));
    }
    printf("\n");
}
int main()
{
    system("cls");
    char arr[SIZE];
    char str[SIZE];
    int digitArray[SIZE];
    printf("Enter any string containing alphabets, spaces and digits: ");
    // scanf("%s", &arr);
    gets(arr); // gets to read space

    int alpha = 0, digit = 0, spaces = 0;

    for (int i = 0; *(arr + i) != '\0'; i++)
    {
        if (*(arr + i) >= '0' && *(arr + i) <= '9')
        {
            digitArray[i] = *(arr + i);
            digit++;
            *(digitArray + i - alpha - spaces) = *(arr + i);
        }
    }
    printf("Number of digits in the array are: %d\n", digit);

    for (int i = 0; *(arr + i) != '\0'; i++)
    {
        if (*(arr + i) >= 'a' && *(arr + i) <= 'z' || *(arr + i) >= 'A' && *(arr + i) <= 'Z')
        {
            alpha++;
            *(str + i - digit) = *(arr + i);
        }
    }
    printf("Number of alphabets in the array are: %d\n", alpha);

    for (int i = 0; *(arr + i) != '\0'; i++)
    {
        if (*(arr + i) == ' ')
        {
            spaces++;
            *(str + i - digit) = *(arr + i);
        }
    }
    printf("Number of spaces in the array are: %d\n", spaces);

    printDigit(digitArray, digit);
    printf("\n");

    int sizee = alpha + spaces;
    printuppercase(str, sizee);

    return 0;
}