#include <stdio.h>
#define SIZE 8
void copy(char ch[], int size)
{
    char name[8];
    for (int i = 0; i < size; i++)
    {
        name[i] = ch[i];
    }
    printf("%s\n", name);
}
int main()
{
    system("cls");
    char ch[8] = {'k', 'h', 'a', 'd', 'i', 'j', 'a', '\0'};
    printf("%s\n", ch); 
    copy(ch, 6);
    return 0;
}