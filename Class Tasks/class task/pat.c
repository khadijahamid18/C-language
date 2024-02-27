#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void pythogoreanTriples()
{
	int side1, side2, hypotenuse;
	printf("Pythagorean triples: \n");
	for (side1 = 1; side1 <= 200; side1++)
	{
		for (side2 = 1; side2 <= 200; side2++)
		{
			for (hypotenuse = 1; hypotenuse <= 200; hypotenuse++)
			{
				if (pow(side1, 2) + pow(side2, 2) == pow(hypotenuse, 2) && pow(hypotenuse, 2) <= 200)
				{
					printf("%d\t+\t%d\t=\t%d\n", side1, side2, hypotenuse);
				}
			}
		}
	}
}
int main()
{
	pythogoreanTriples();
	return 0;
}