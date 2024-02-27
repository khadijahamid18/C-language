#include <stdio.h>
#define MAX_SIZE 100
void toUpper(char ch[], int size)
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
    }
    printf("Lower Case: %s", ch);
}
int main()
{
    system("cls");
    char arr[MAX_SIZE];
    printf("Enter any text in capital(A-Z): ");
    scanf("%s", &arr);
    toUpper(arr, MAX_SIZE);

    return 0;
}