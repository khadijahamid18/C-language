#include<stdio.h>
#include<math.h>
long fibonacciSeries(int num)
{
	int x = 0, y = 1, z;

	printf("%d\t%d\t", x, y);

	int i;

	for (i = 2; i <= num; i++)
	{
		z = x + y;
		printf("%d\t", z);
		x = y;
		y = z;
	}

	printf("\n\n%d is the largest number", z);
	return z;
}

int main()
{
	int num;

	printf("Enter a number: ");
	scanf_s("%d", &num);
	printf("\n");
	fibonacciSeries(num);
	return 0;
}





