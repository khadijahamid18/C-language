#include <stdio.h>
#define SIZE 20
void compare(char n1[], char n2[])
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (n1[i] == n2[i])
        {
            count++;
        }
    }
    if (count == SIZE)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Both are not equal");
    }
}
int main()
{
    system("cls");
    
    char b[20] = {'k', 'h', 'a', 'd', 'i', 'j', 'a', '\0'};
    char c[20] = "khadija"; 
    compare(b, c);
    return 0;
}