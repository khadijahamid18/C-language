#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int palindorme(int palin)
{
	int tocheck = palin;
	int reminder = 0;
	int reverse = 0;
	while (palin != 0)
	{
		reminder = palin % 10;
		reverse = reverse * 10 + reminder;
		palin /= 10;
	}
	if (tocheck == reverse)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num1 = 0;
	int reverse = 0;
	int num = 0;
	printf("Enter the number:");
	scanf_s("%d", &num1);
	num = num1;
	reverse = palindorme(num1);
	if (reverse==1)
	{
		printf("number is palindorme");

	}
	else
	{
		printf("is not a palin dorme");
	}
	
	
	return 0;

}