#include <stdio.h>
int main()
{
    system("cls");
    char name[] = {'a', 'b', 'c', '\0'};
    char name1[] = "abc";
    printf("%s", name);
    printf("\n%s", name1);
    printf("\nPrint the character array using loop \n");
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name1[i]);
        i++;
    }

    return 0;
}