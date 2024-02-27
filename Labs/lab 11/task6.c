#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
void printdigit(int *arr, int size);
void printuppercase(const char *a, int size);

int main()
{
    system("cls");
    char str[200], arr[200];
    int digit[200];
    int digits, alpha, special, spaces;
    int i;

    // assign all is to zero
    digits = alpha = special = spaces = 0;

    // Input
    printf("Enter a sring: ");
    // fgets(arr, sizeof arr, stdin);
    gets(arr);

    // for (int i = 0; *(arr + i) != '\0'; i++)
    // {
    //     if (*(arr + i) >= '0' && *(arr + i) <= '9')
    //     {
    //         digit[i] = *(arr + i);
    //         digits++;
    //         *(digit + i - alpha - spaces) = *(arr + i);
    //     }
    // }
    // printf("Number of digits in the array are: %d\n", digit);

    // for (int i = 0; *(arr + i) != '\0'; i++)
    // {
    //     if (*(arr + i) >= 'a' && *(arr + i) <= 'z' || *(arr + i) >= 'A' && *(arr + i) <= 'Z')
    //     {
    //         alpha++;
    //         *(str + i - digits) = *(arr + i);
    //     }
    // }
    // printf("Number of alphabets in the array are: %d\n", alpha);

    // for (int i = 0; *(arr + i) != '\0'; i++)
    // {
    //     if (*(arr + i) == ' ')
    //     {
    //         spaces++;
    //         *(str + i - digits) = *(arr + i);
    //     }
    // }
    // printf("Number of spaces in the array are: %d\n", spaces);

    for (i = 0; *(arr + i) != '\0'; i++)
    {

        // count and copy digit
        if (*(arr + i) >= '0' && *(arr + i) <= '9')
        {
            digits++;
            *(digit + i - alpha - spaces) = *(arr + i);
        }

        // count and copy alphabets
        else if (((arr + i) >= 'A' && *(arr + i) <= 'Z') || ((arr + i) >= 'a' && *(arr + i) <= 'z'))
        {
            alpha++;
            *(str + i - digits) = *(arr + i);
        }

        // count spaces
        else if (*(arr + i) == ' ')
        {
            spaces++;
            *(str + i - digits) = *(arr + i);
        }

        else
        {
            special++;
        }
    }
    printf("\nTotal Digits present : %d \nTotal Alphabets  present: %d \nTotal Spaces  present: %d ", digits, alpha, spaces);

    printf("\n");
    // function call to print digit
    printdigit(digit, digits);
    printf("\n");

    // function calll to print upper case character
    int size = alpha + spaces;
    printuppercase(str, size);

    return 0;
}

//*******functions************
void printdigit(int *arr, int size)
{
    printf("Interger in an array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", *(arr + i));
    }
}
void printuppercase(const char *a, int size)
{
    printf("Alphabet and spaces in an array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", toupper(*(a + i)));
    }
}