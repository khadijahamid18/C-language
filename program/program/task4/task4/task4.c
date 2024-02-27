#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void convertTime(int Sec, int* hour, int* min, int* sec)
{
	*hour = Sec / 3600;
	Sec = Sec - (*hour * 3600);
	*min = Sec / 60;
	*sec = Sec - (*min * 60);
}

int main()
{
	int Sec, hours = 0, min = 0, sec = 0;
	do
	{
		printf("Enter the number of input seconds: ");
		scanf("%d", &Sec);
	} while (Sec < 0);
	convertTime(Sec, &hours, &min, &sec);
	printf("\thours\t:\tmin\t:\tsec\n");
	printf("\t%d\t:\t%d\t:\t%d", hours, min, sec);
	return 0;
}