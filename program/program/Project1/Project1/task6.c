#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float calculatesize(float pp,float br,float dr)
{
	float N = 0;
	N = ((pp + (br * pp)) - (dr * pp));
	return N;
}
int main()
{
	float br, dr, ny;
	int sp;
	float totel = 0;
	do {
		printf("Enter starting size of population:");
		scanf("%d", &sp);
	} while (sp < 2);
	do {
		printf("Enter annual birth rate:");
		scanf("%f", &br);
	} while (br < 0);
	do {
		printf("Enter  annual deth rate:");
		scanf("%f", &dr);
	} while (dr < 0);
	do
	{
		printf("Enter the number of year to display:");
		scanf("%f", &ny);
	} while (ny < 0);
	totel = calculatesize(sp, br, dr);
	printf("%.2f", totel);
	return 0;
}