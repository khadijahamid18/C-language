#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char str[] = {"khadija hamid will pass in PF InshaAllah"};
    char *ptr = strtok(str, " ");
    printf("Token: %s\n", ptr);
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        printf(" %s\n", ptr);
    }

    return 0;
}