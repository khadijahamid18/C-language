#include <stdio.h>
#define SIZE 50

int isEven(int number)
{
	if (number % 2 == 0)
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
	system("cls");
	int array[SIZE] = {2, 6, 3, 8, 35, 180, 65, 47, 45, 86, 187, 121, 56};
	int evenArray[50], oddArray[50];
	int check;
	int j = 0, k = 0;

	for (int i = 0; i < 50; i++)
	{
		check = isEven(*(array + i));
		if (check == 1)
		{
			*(evenArray + j) = *(array + i);
			j++;
		}
		else
		{
			*(oddArray + k) = *(array + i);
			k++;
		}
	}
	printf("EVEN ARRAY IS: \n");
	for (int i = 0; i < j; i++)
	{
		if (*(evenArray + i) != 0)
		{
			printf("%d ", *(evenArray + i));
		}
	}
	printf("\n");
	printf("\n ODD ARRAY IS: \n");
	for (int i = 0; i < k; i++)
	{
		printf("%d ", *(oddArray + i));
	}

	return 0;
}