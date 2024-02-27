#include<stdio.h>
#define ROWS 10 
#define COLS 10 
void transpose(int array[][COLS], int row, int col);
int main()
{
    system("cls");
	int array[ROWS][COLS];
	int row, col;
	printf("Enter no of rows:");
	scanf("%d", &row);
	while (row >= 10)
	{
		printf("INVALID!\n Again enter:");//Validation
		scanf("%d", &row);
	}
	printf("Enter no of column:");
	scanf("%d", &col);
	while (col >= 10)
	{
		printf("INVALID!\n Again enter:");//Validation
		scanf("%d", &col);
	}
	for (int i = 0; i < row; i++)   //Taking elements from the user
	{
		for (int j = 0; j < col; j++)
		{
			printf("enter elements : ");
			scanf("%d", &array[i][j]);
		}

	}

	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)  //displaying elements
		{
			printf("%6d", array[i][j]);
		}
		printf("\n");
	}


	transpose(array, row, col);

	return 0;
}
void transpose(int array[][COLS], int row, int col)
{
	printf("\nTRANSPOSE OF MATRIX IS:\n");   //Displayement of transpose
	for (int j = 0; j < COLS; j++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			printf("%6d", array[i][j]);

		}
		printf("\n");
	}

}