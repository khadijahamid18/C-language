#include <stdio.h>
#define NULL 0
int main()
{
    system("cls");
    int a = 100;
    char ch = 'a';
    int *aptr = NULL;
    char *bptr = NULL;
    aptr = &a;
    bptr = &ch;
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%d\n", *aptr);
    printf("%p\n", aptr);
    printf("%p\n", &aptr);
    printf("%c\n", *bptr);
    printf("%p\n", bptr);
    printf("%p\n", &bptr);
    printf("%p\n", *bptr);
    printf("%p\n", &*bptr);

    return 0;
}