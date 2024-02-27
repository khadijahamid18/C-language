#include <stdio.h>
#define SIZE 7
void fun(char ch[], char name)
{
    int flag = 1;
    for (int i = 0; i < SIZE; i++)
    {
        if (ch[i] == name)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0) 
    {
        printf("Congratulations !!!");
    }
    else
    {
        printf("Sorry");
    }
}
int main()
{
    system("cls");
    char ch[] = {'k', 'h', 'a', 'd', 'i', 'j', 'a', '\0'};
    printf("%s\n ", ch);
    fun(ch, 'j');
    return 0;
}