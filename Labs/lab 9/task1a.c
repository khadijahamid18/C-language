// Replace a character with another by taking input from the user
#include <stdio.h>
#define SIZE 100
char replace(char str[], char ch1, char ch2)
{
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
        }
        else if (str[i] == ch2)
        {
            str[i] = ch1;
        }
    }
    return str;
}

int main()
{
    system("cls");
    char ch[SIZE];
    char c1, c2;
    printf("Enter any array: ");
    scanf("%s", &ch);
    getchar();
    printf("Enter the character which you want to place: ");
    scanf("%c", &c1);
    getchar();
    printf("Enter character from the array which you want to replace: ");
    scanf("%c", &c2);
    getchar();
    replace(ch, c1, c2);
    printf("%s", ch); 

    return 0;
}

