#include <stdio.h>
int main()
{
	system("cls");
	int number, remainder, ans;
	char ch = 'y';
	do
	{
		printf("Please Enter a Five Digit Number:");
		scanf("%d", &number);

		int toCheck = number;

		int reversedNumber = 0;

		while (number != 0)
		{
			remainder = number % 10;
			number /= 10;
			reversedNumber = reversedNumber * 10 + remainder;
		}

		if (toCheck == reversedNumber)   
		{
			printf("Number is Palindrome");
		}
		else
		{
			printf("Number is Not Palindrome");
		}
		printf("\nDo you want to continue ? ");
		getchar();
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}