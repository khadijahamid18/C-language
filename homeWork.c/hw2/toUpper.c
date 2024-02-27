#include <stdio.h>
#define MAX_SIZE 100
void toUpper(char ch[], int size)
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
    }
    printf("Upper Case: %s", ch);
}
int main()
{
    system("cls");
    char arr[MAX_SIZE];
    printf("Enter any text in small (a-z): ");
    scanf("%s", &arr);
    toUpper(arr, MAX_SIZE);

    return 0;
}