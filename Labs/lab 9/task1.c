// replace a character with another character without user input
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
    char ch[SIZE] = "world";
    char c1, c2;            // r ki jagah e likhna
    c1 = 'e', c2 = 'r';   // c1 jis se replace krna hy and c2 jisko replace krna hy
    replace(ch, c1, c2);
    printf("%s", ch); 

    return 0;
}

