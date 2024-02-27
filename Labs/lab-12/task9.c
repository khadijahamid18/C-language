#include <stdio.h>
#define SIZE 100
int strcmp(const char *string1, const char *string2)   // comparing by pointers
{
	int count = 0;
	int i = 0;
	while ((*string1 + i) != '\0')
	{ 
		count++;
		i++;
	}
	int count1 = 0;
	int j = 0;
	while (*(string2 + j) != '\0')
	{
		count1++;
		j++;
	}
	if (count < count1)
	{
		return -1;
	}
	else if (count == count1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int strcompare(const char string1[], const char string2[]) // comparing by array
{
	int count = 0;
	int i = 0;
	while (string1[i] != '\0')
	{

		count++;
		i++;
	}
	int count1 = 0;
	int j = 0;
	while (string2[j] != '\0')
	{
		count1++;
		j++;
	}
	if (count < count1) 
	{
		return -1;
	}
	else if (count == count1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	system("cls");
	const char string1[SIZE];
	const char string2[SIZE];
	printf("Enter the first string: ");
	gets(string1);
	printf("Enter the second string: ");
	gets(string2);
	printf("\nString compare by using pointers\n");
	if ((strcmp(string1, string2)) == 1)
	{
		printf("string1 %s is greater than string2:%s", string1, string2);
	}
	else if ((strcmp(string1, string2)) == -1)
	{
		printf("string1 %s is less than string2:%s", string1, string2);
	}
	if ((strcmp(string1, string2)) == 0)
	{
		printf("%s Both(string1 and string2) are equal:%s", string1, string2);
	}

	printf("\nString compare by using array\n");
	if ((strcompare(string1, string2)) == 1)
	{
		printf("string1 %s is greater than string2:%s", string1, string2);
	}
	else if ((strcompare(string1, string2)) == -1)
	{
		printf("string1 %s is less than string2:%s", string1, string2);
	}
	if ((strcompare(string1, string2)) == 0)
	{
		printf("Both(string1 and string2)%s are equal:%s", string1, string2);
	}

	return 0;
}