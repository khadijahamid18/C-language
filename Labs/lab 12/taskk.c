#include <stdio.h>
int main()

{
    system("cls");
    char str[100][20];

    int n;

    printf("Strings you want to enter: ");

    gets(n);

    printf("enter n strings: ");

    for (int i = 0; i < n; i++)

        printf("%d", str[i]);

    for (int i = 0; i < n; i++)

    {

        if ((int)str[i][0] == 98) // ascii value b is 98

            printf("%d", str[i]);
    }

    return 0;
}