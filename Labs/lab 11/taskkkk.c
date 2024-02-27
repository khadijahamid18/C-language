#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
void printdigit(int *arr, int size);
void printuppercase(const char *a, int size);

int main()
{
	system("cls");
	char ch[200], str[200];
	int digit[200];
	int countDigits, countAlphabet, countSpecialChar, countSpaces;
	int counter;

	// assign all counters to zero
	countDigits = countAlphabet = countSpecialChar = countSpaces = 0;

	// Input
	printf("Enter a string: ");
	// fgets(str, sizeof str, stdin);
	gets(str);

	for (counter = 0; *(str + counter) != '\0'; counter++)
	{

		// count and copy digit
		if (*(str + counter) >= '0' && *(str + counter) <= '9')
		{
			countDigits++;
			*(digit + counter - countAlphabet - countSpaces) = *(str + counter);
		}

		// count and copy alphabets
		else if (((str + counter) >= 'A' && *(str + counter) <= 'Z') || ((str + counter) >= 'a' && *(str + counter) <= 'z'))
		{
			countAlphabet++;
			*(ch + counter - countDigits) = *(str + counter);
		}

		// count spaces
		else if (*(str + counter) == ' ')
		{
			countSpaces++;
			*(ch + counter - countDigits) = *(str + counter);
		}

		else
		{
			countSpecialChar++;
		}
	}
	printf("\nTotal Digits present : %d \nTotal Alphabets  present: %d \nTotal Spaces  present: %d ", countDigits, countAlphabet, countSpaces);

	printf("\n");
	// function call to print digit
	printdigit(digit, countDigits);
	printf("\n");

	// function calll to print upper case character
	int size = countAlphabet + countSpaces;
	printuppercase(ch, size);

	return 0;
}

//*******functions************
void printdigit(int *arr, int size)
{
	printf("Interger in an array are : ");
	for (int i = 0; i < size; i++)
	{
		printf("%c", *(arr + i));
	}
}
void printuppercase(const char *a, int size)
{
	printf("Alphabet and spaces in an array are : ");
	for (int i = 0; i < size; i++)
	{
		printf("%c", toupper(*(a + i)));
	}
}