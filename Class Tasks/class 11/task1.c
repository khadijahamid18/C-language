#include <stdio.h>
int main()
{
    char multi[2][3] = {{1, 2, 3},
                        {11, 12, 13}};
    printf("%p\n", multi);
    printf("%p\n", *multi);
    printf("%d\n", **multi);
    printf("%d\n", *(*(multi + 0) + 0));
    printf("%d\n", multi[0][0]);
    printf("%d\n", *(*(multi + 1) + 2));
    printf("%d\n", multi[1][2]);

    return 0;
}