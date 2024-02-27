#include <stdio.h>
#define SIZE 100
void upperCase(char *arr)
{
    char *p;
    p = arr;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) >= 'a' && *(p + i) <= 'z')
        {
            *(p + i) = *(p + i) - 32;
        }
    }
    printf("Upper case string: %s", arr);
    getch();
}
int main()
{
    system("cls");
    char *p, arr[SIZE];
    p = &arr;
    printf("Enter a string: ");
    scanf("%s", &arr);
    upperCase(&arr);

    return 0;
}