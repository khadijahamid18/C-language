// caesar cipher (for secret message)
// jitny key ho utny character agay chala jae ga 
#include <stdio.h>
#define SIZE 100
int main()
{
    system("cls");
    char message[SIZE], ch;
    int key;
    printf("Enter a message to encrypt: "); 
    scanf("%s", &message);
    printf("Enter key: ");
    scanf("%d", &key);
    for (int i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
    printf("Encrypted message: %s", message);
    return 0;
}