// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     system("cls");
//     char str[50] = "Khadija Hamid";

//     printf("The given string is =%s\n", str);

//     printf("After reversing string is =%s", strrev(str));

//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char arr[30];
    printf("Plz enter the string: ");
    gets(arr);
    printf("The reversed string is: %s\n", strrev(arr));

    return 0;
}