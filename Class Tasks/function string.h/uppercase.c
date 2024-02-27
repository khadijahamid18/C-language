// upper case using pointers without function
#include <stdio.h>
int main()
{
    system("cls");
    char na[30];
    char *arr;
    arr = &na;
    printf("Enter any string: ");
    gets(na);
    for (int i = 0; *(arr + i) != NULL; i++) 
    {
        if (*(arr + i) >= 97 && *(arr + i) <= 122)
        {
            *(arr + i) = *(arr + i) - 32;
        }
    }
    printf("Upper case : %s", na);
    getch();

    return 0;
}