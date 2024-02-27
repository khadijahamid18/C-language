#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    system("cls");
    char str[MAX_SIZE];
    printf("Please enter your text: ");
    scanf("%s", &str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase : %s", str);

    return 0;
}
