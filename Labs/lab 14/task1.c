// counting number of characters and lines in a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
   system("cls");
   FILE *file;
   char ch;
   int characters, words, lines;
   file = fopen("counting.txt", "r");
   if (file == NULL)
   {
      printf("Sorry, the file is found!!!");  
      exit(1);
   }
   characters = words = lines = 0;
   while ((ch = fgetc(file)) != EOF)
   {
      characters++;
      if (ch == '\n' || ch == '\0')
         lines++;
      if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
         words++;
   }
   if (characters > 0)
   {
      words++;
      lines++;
   }
   printf("Total characters = %d\n", characters);
   printf("Total words = %d\n", words);
   printf("Total lines = %d\n", lines);
   fclose(file);
   getch();

   return 0;
}