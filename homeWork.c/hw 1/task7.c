// age in upper and lower case
#include <stdio.h>
int main()
{
    system("cls");
    char lowerCase, upperCase;
    printf("Enter an alphabet (a-z) in lower case: ");
    scanf("%c", &lowerCase);
    int askiCapital, askiLower;

    askiCapital = lowerCase;
    askiLower = askiCapital - 32;

    upperCase = askiLower;
    printf("Enter an alphabet (A-Z) in Upper case: ");
    printf("%c", upperCase);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char c;
//     printf("Enter u to display uppercase alphabets.\n");
//     printf("Enter l to display lowercase alphabets. \n");
//     scanf("%c", &c);

//     if (c == 'U' || c == 'u')
//     {
//         for (c = 'A'; c <= 'Z'; ++c)
//             printf("%c ", c);
//     }
//     else if (c == 'L' || c == 'l')
//     {
//         for (c = 'a'; c <= 'z'; ++c)
//             printf("%c ", c);
//     }
//     else
//     {
//         printf("Error! You entered an invalid character.");
//     }

//     return 0;
// }