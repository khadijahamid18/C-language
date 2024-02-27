// Program to read the series of strings and print only those begining with letter b
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
    system("cls");
	char arr[SIZE];
	char *temp;
	char ch;

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

	printf("Strings starting with letter b : ");
		
			strrev(arr);
			// copying the first token into the temp array
			strcpy(&temp, (strtok(arr, " ")));
			// Reversing the token to correct the order
			strrev(&temp);
			ch = temp;	
			if(ch == 'b' || ch == 'B')
				printf("%s\t", &temp); 
	for (int i = 0; i < SIZE; i++)
	{
		// copying the next token into the temp array
		strcpy(&temp, (strtok(NULL, " ")));
		// This will reverse the token to correct the alphabetic order
		strrev(&temp);
		ch = temp;
		// Printing the next token ownwards 
		if(ch == 'b' || ch == 'B')
		printf("%s\t", &temp);
	}


	

	return 0;
}