#include <stdio.h>
void upperCase(char *ch) 
{
    for (int i = 0; *ch != '\0'; i++)  
    {
        if (*ch >= 'a' && *ch <= 'z') 
        {
            *ch = *ch - 32;
        }
    }
    printf("To Upper Case: %c", ch);  
}
int main()
{
    system("cls");
    char arr;
    printf("Please enter any character(a-z): ");
    scanf("%c", &arr);
    upperCase(&arr);  

    return 0;
}