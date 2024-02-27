#include<stdio.h>
int main()
{
    system("cls");
    char ch[50];
    printf("Enter line of the text: ");
    // scanf("%s", ch);
    gets(ch);
    char* p1 = strtok(ch, " ");
    char* p2 = strtok(NULL, " ");
    printf("%s %s", p2, p1);

    return 0;
}