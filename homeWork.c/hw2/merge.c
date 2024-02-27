#include <stdio.h>
#define SIZE1 8
#define SIZE2 6
int merge(char m[], char ch1[], char ch2[]) 
{
    for (int i = 0; i < SIZE1; i++)
    {
        printf("%c\n", ch1[i]);
    }
    for (int j = 0; j < SIZE2; j++)
    {
        printf("%c\n", ch2[j]);
    }
    for (int k = 0; k < SIZE1; k++)
    {
        m[k] = ch1[k];
        m[k + 8] = ch2[k];
    } 
    
    printf("Merge array is : ");
    for (int l = 0; l < (SIZE1 + SIZE2); l++)
    {
        printf("%c", m[l]);  
    }

    // printf("%s %s", ch1, ch2 );
}
int main()
{
    system("cls");
    char a[SIZE1] = {'K','h','a','d','i','j','a','\0'};
    char b[SIZE2] = {'H','a','m','i','d','\0'}; 
    char c[SIZE1 + SIZE2];
    merge(c, a, b); 
    

    return 0;
}