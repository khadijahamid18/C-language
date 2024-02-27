#include <stdio.h>
#define SIZE 10    
void printAddress(const char *ch)
{
    for (int i = 0; *(ch + i) != '\0'; i++)
    {
        printf("The value of %d is: %c\n", i, *(ch + i));
        printf("The address of %d is: %p\n", i, (ch + i));
        printf("\n");
    }
}
int main()
{
    system("cls");
    char arr[SIZE];
    printf("Enter any character or string: ");
    scanf("%s", arr);
    printAddress(arr);

    return 0;
}