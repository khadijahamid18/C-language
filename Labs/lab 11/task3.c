#include<stdio.h>
#include<ctype.h>
#define SIZE 100
void isVowel(char faria[]);
int main()
{
    char khadija[SIZE];
    printf("Enter a character array :");
    scanf("%s", &khadija);

    int count = 0;
    for (int i = 0; khadija[i] != '\0' ; i++)
    {
        if((khadija[i] == 'a') || (khadija[i] == 'e') || (khadija[i] == 'i') || (khadija[i] == 'o') || (khadija[i] == 'u'))
        {
            count++;
        }
    }
    isVowel(khadija);
    printf("No of vowels: %d", count);

    return 0;
}
void isVowel(char faria[])
{
    printf("Vowel in upperCase: ");
     for (int i = 0; faria[i] != '\0' ; i++)
    {
         if((faria[i] == 'a') || (faria[i] == 'e') || (faria[i] == 'i') || (faria[i] == 'o') || (faria[i] == 'u'))
        {
             faria[i]=toupper(faria[i]);
             printf("%c", faria[i]);
        }    
      
    }
    printf("\n");
     
}