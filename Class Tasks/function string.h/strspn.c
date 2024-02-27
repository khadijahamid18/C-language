
// C program to illustrate strspn() function
#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");
    int len = strspn("i am", "i");
    printf("Length of initial segment matching : %d\n", len);
    return (0);
}
