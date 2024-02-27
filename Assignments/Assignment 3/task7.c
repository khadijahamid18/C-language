#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
    system("cls");
    // STRINGS TO INTEGERS AND THEIR SUM
    printf("PRINITING STRING TO INTEGERS AND THEIR SUM:\n\n");
    
    char arr1[SIZE];
    printf("Enter 1st string of integers: ");
    gets(arr1);

    char arr2[SIZE];
    printf("Enter 2nd string of integers: ");
    gets(arr2);

    char arr3[SIZE];
    printf("Enter 3rd string of integers: ");
    gets(arr3);

    char arr4[SIZE];
    printf("Enter 4th string of integers: ");
    gets(arr4);

    printf("\n");
    
    int sumInteger = atoi(arr1) + atoi(arr2) + atoi(arr3) + atoi(arr4);
    printf("The sum of all four strings after conversion is: %d\n", sumInteger); 
    
    return 0;
}