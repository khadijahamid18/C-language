#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int *ptr1, *ptr2;
    ptr1 = (int *)calloc(10, sizeof(int));

    if (ptr1 == NULL)
    {
        return 0;
    }
    ptr1 = ptr2;
    for (int i = 0; i < 10; i++)
    {
        *ptr1 = i;
        ptr1++;
    }
    ptr1 = ptr2;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *ptr1);
        ptr1++; // use of pointer arithmetic
    }
    // free the dynamically allocated memory
    if (ptr1 == NULL)
    {
        free(ptr2);
        ptr1 = NULL;
        ptr2 = NULL;
    }

    return 0;
}