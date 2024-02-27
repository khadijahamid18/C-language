// program for character handling
#include <stdio.h>
int isblank(int c)
{
    if (c == ' ')
        return 1;

    else
        return 0;
}
int isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
int isalpha(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}
int isalnum(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
int isxdigit(int c) // hexadecimal = 0 1 2 3 4 5 6 7 8 9 A B C D E F.
{
    if (c >= '0' && c <= '9')
        return 1;
    if (c >= 'a' && c <= 'f')
        return 1;
    if (c >= 'A' && c <= 'F')
        return 1;
    else
        return 0;
}
int islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
int isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}
int tolower(int c)
{
    int *upper_c;
    if (c >= 'A' && c <= 'Z')
    {
        c = c + '32';
        return 1;
    }
    else
        return 0;
}
// int toupper(int c)
int isspace(int c)
{
    if (c == ' ' || c == '\n' || c == ' ' || c == '\f' || c == '\r' || c == '\t' || c == '\v')
        return 1;
    else
        return 0;
}
int iscntrl(int c)
{
    if (c == ' ' || c == '\a' || c == '\b' || c == '\f' || c == '\r' || c == '\t' || c == '\v' || c == '\n')
        return 1;
    else
        return 0;
}
int ispunct(int c)
{
    if (c == '$' || c == '#' || c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}' || c == ';' || c == ':' || c == '%')
        return 1;
    else
        return 0;
}
// The printable characters are:
//! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~
// : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ `
int isprint(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' ' || c == '$' || c == '#' || c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}' || c == ';' || c == ':' || c == '%'))
        return 1;
    else
        return 0;
}
int isgraph(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '$' || c == '#' || c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}' || c == ';' || c == ':' || c == '%'))
        return 1;
    else
        return 0;
}
int main()
{
    system("cls");
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    getchar();
    int check;
    // function calling 
    if (isblank(ch))
        printf("%c is a Blank Space.", ch);
    if (isalpha(ch))
    {
        printf("\n%c is a Aplhabet.", ch);
        if (islower(ch))
            printf("\n%c is a Lower Case Character.", ch);
        if (isupper(ch))
            printf("\n%c is a Upper Case Character.", ch);
        if (isalnum(ch))
            printf("\n%c is a Digit / Aplphabet by \'isalnum'.", ch);
    }
    if (isdigit(ch))
    {
        printf("\n%c is a Digit.", ch);
        if (isalnum(ch))
            printf("\n%c is a Digit / Aplphabet by \'isalnum'.", ch);
        if (isxdigit(ch))
            printf("\n%c is a Hexadecimal Digit Character.", ch);
    }
    else if (isxdigit(ch))
        printf("\n%c is a Hexadecimal Digit Character.", ch);
    if (isalpha(ch))
    {
        if (check = (tolower(ch)))
            if (check != ch)
            {
                printf("\n%c is converted to upper case", check);
            }
            else
                printf("\n%c is in  upper case", ch);
    }
    if (ispunct(ch))
        printf("\n%c is a Punctuation.", ch);
    if (isgraph(ch))
        printf("\n%c is a printable character except space(isgraph).\nSpace is not a printing character other than a space", ch);
    if (isprint(ch))
        printf("\n%c is a printable character with space(isprint).", ch);
    if (isspace(ch))
        printf("\n%c is a White space.", ch);
    if (iscntrl(ch))
        printf("\n%c is a control charcter.", ch);
    return 0;
}