#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");
    int len;
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = 't';
    char *ret;

    ret = strrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}