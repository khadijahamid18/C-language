// Program to read the strings and print only those words ending at ed
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    system("cls");
    char arr[SIZE];
    char *temp;
    printf("Enter any string : ");
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = getchar();
        if (arr[i] == 10)
        {
            arr[i] = '\0';
            break;
        }
    } 
    printf("Strings ending with letters ed : ");

    // first token is printing 
    int count = 0;      
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 0)    // This if is for only to check first element ending at ed therefor i is 0 
        {  

            temp = strtok(arr, " ");
            count = 0;
            while (temp[count] != 0)  // count are no of elements
            {
                count++;
            }
            if (temp[count - 2] == 'e' && temp[count - 1] == 'd')
                printf("%s\t", temp);
        }
        temp = strtok(NULL, " "); // NULL means jahan se last chora ths wohi se start ho
        count = 0;
        while (temp[count] != 0)       // This is check other elements ending at ed
        {
            count++;
        }
        if (temp[count - 2] == 'e' && temp[count - 1] == 'd')
            printf("%s\t", temp);
    }

    return 0;
}