//checks whether a character is a hexadecimal digit character (0-9, a-f, A-F) or not.
#include <stdio.h>
#include<ctype.h>
int main()
{
    system("cls");
    char c;
    printf("Please enter a hexadecimal digit character: ");
    scanf("%c", &c);
    if (isxdigit(c) == 0)
    {
        printf("%c is not a hexadecimal digit character.",c);
    }
    else
    {
        printf("%c is a hexadecimal digit character.",c);
    }

    return 0;
}

// #include <ctype.h>
// #include <stdio.h>

// int main() 
// {
//    system("cls");
//    char c = '7';
//    int result;

//    // hexadecimal character is passed
//    result = isxdigit(c); // result is non-zero
//    printf("Result when %c is passed to isxdigit(): %d", c, isxdigit(c));

//    c = 'a';

//    // non-hexadecimal character is passed
//    result = isxdigit(c); // result is 0

//    printf("\nResult when %c is passed to isxdigit(): %d", c, isxdigit(c));

//    return 0;
// }