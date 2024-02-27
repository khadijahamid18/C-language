#include<stdio.h>
int main()
{
    system("cls");
    char data[200];
    printf("Enter a character array: ");
    // scanf("%s", &data);
    for(int i = 0; data[i] != '\0'; i++)
    {
        scanf("%c", &data[i]);
    }
    int alphabets, digits, spaces;
    alphabets = digits = spaces = 0;
    for(int i = 0; data[i] != '\0'; i++)
    {
        if (data[i] >= 'a' && data[i] <= 'z')
        {
            alphabets++;
        }
        else if (data[i] >= '0' && data[i] <= '9')
        {
            digits++;
        }
        else if (data[i] == ' ')
        {
            spaces++;
        }        
    }
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}