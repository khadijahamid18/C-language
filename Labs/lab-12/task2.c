// Program to reverse a sentence
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main()
{
    system("cls");
	char arr[SIZE];
	char *temp;

	printf("Enter any string: ");
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = getchar();
		if (arr[i] == 10)
		{
			arr[i] = '\0';
			break;
		}
	}
	printf("The original string is: %s\n", arr);
	printf("Reversed Sentence : ");
	_strrev(arr); // reverse string
		// It will copy the first token into the temp 
	strcpy(&temp , (strtok(arr, " ")));
		// Reversing the token to correct the order
	_strrev(&temp);
		// Printing the first token
	printf("%s ", &temp);
	for (int i = 0; i < SIZE; i++)
	{
		// copying the next token into the temp array
		strcpy(&temp, (strtok(NULL, " ")));
		// This will reverse the token to correct the alphabetic order
		_strrev(&temp);
		// Printing the next token
		printf("%s ", &temp);
	}

	return 0;

}