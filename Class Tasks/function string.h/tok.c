#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char str[] = {"khadija hamid"};
    char *ptr = strtok(str, " ");
    printf("Token: %s\n", ptr);
    ptr = strtok(NULL, " ");
    printf("Token: %s\n", ptr);

    return 0;
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char str[80] = "This is - www.tutorialspoint.com - website";
//     const char s[2] = "-";
//     char *token;

//     /* get the first token */
//     token = strtok(str, s);

//     /* walk through other tokens */
//     while (token != NULL)
//     {
//         printf(" %s\n", token);

//         token = strtok(NULL, s);
//     }

//     return (0);
// }