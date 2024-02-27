// #include<stdio.h>
// int main()
// {
// 	system("cls");
// 	char s1[80];
// 	char *tokenptr;
// 	char seps[] = " ";
// 	char *tokenarray[80];
// 	int i = 0;

// 	printf("Input the string you want tokenized: \n\n");
// 	gets(s1);

// 	printf("\nThe tokens in reverse order are: \n\n");
// 	tokenptr = strtok(s1, seps);

// 	while(tokenptr != NULL)
//     {
// 		tokenarray[i++] = s1;
// 		printf("%s\n", tokenptr);
// 		tokenptr = strtok(NULL,seps);
// 	}

// 	return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[] = "This is an example!";
	char *new = malloc(strlen(str));
	char *p = strtok(str, " ");
	size_t j = 0;
	while (1)
	{
		for (size_t i = strlen(p) - 1; i > -1; i--)
		{
			new[j++] = p[i];
		}
		p = strtok(NULL, " ");
		if (!p)
			break;
		new[j++] = ' ';
	}
	printf("%s\n", new);
	printf("kjhgfd\n");

	return 0;
}