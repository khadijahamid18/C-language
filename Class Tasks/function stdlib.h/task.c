#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
   system("cls"); 
   float val;
   char str[20];
   
   strcpy(str, "98993489435");
   val = atof(str);
   printf("String value = %s, Float value = %.3f\n", str, val);

   strcpy(str, "khadija");
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);

   return(0);
}