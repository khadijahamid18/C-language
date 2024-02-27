#include <stdio.h>
void reverse(char ch[], int j)
{
    char temp;
    j--;
    for (int i = 0; i < j; i++)
    {
        temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }
    printf("\nReversed Array \n");        

    printf("\n%s", ch);
}
int main()
{
    system("cls");
    char ch[5] = {'a', 'b', 'c', 'd', '\0'};
    printf("%s\n", ch);

    reverse(ch, 4);

    return 0;
}