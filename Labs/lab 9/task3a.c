// caesar cipher (for secret message)
#include <stdio.h>
#define SIZE 100
void cipher(char message[], int key)
{
    int count = 0;
    printf("Alphabets are: \n");
    while (message[count] != '\0')
    {
        if (message[count] >= 'A' && message[count] <= 'Z')
        {
            message[count] = ((message[count] - 65) + key) % 26; // for capital
            message[count] = message[count] + 65;
        }
        else if (message[count] >= 'a' && message[count] <= 'z')
        {
            message[count] = ((message[count] - 97) + key) % 26; // for small
            message[count] = message[count] + 97;
        }
        count++;
    }
    printf("\n"); 

    printf("Encrypted message: %s", message);
}
int main()
{
    system("cls");
    char message[SIZE], ch;
    int key;
    printf("Enter a message to encrypt: ");
    scanf("%s", &message);
    printf("Enter key: ");
    scanf("%d", &key);
    cipher(message, key);

    return 0;
}