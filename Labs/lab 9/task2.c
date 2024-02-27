#include <stdio.h>
#define SIZE 50
void count(char str[])
{
    int count = 0, digit = 0;
    for (int i = 0; str[i] != '\0' ; i++)  
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') 
        {
            count++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        
    }
    printf("The number of alphabets are: %d\n", count);
    printf("The number of digits are: %d\n", digit);
}
int main()
{
    system("cls");
    char c[SIZE];
    printf("Enter any array: ");
    scanf("%s", &c);
    count(c);

    return 0;
}