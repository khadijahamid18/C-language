// tokenizing telephonr number
#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char ch[20] = "(123) 456-7890";
    // printf("Enter the telephone number: ");
    // scanf("%s", &arr);
    char *p1 = strtok(ch, " ");
    printf("%s", p1);
    // NULL is liye k function wahan se hi start ho jahan last time tha
    char *p2 = strtok(NULL, "-");
    char *p3 = strtok(NULL, "\0");
    printf("%s", p3);
    // char* p = strcat(p1, p3);
    // printf("%s", p);

    return 0;
}