// convert binary to decimal

#include <stdio.h>
int main()
{
  system("cls");
  int num, base = 1, dec = 0, bin, rem;
  printf("Enter a binary number: ");
  scanf("%d", &num);
  while (num > 0)
  {
    rem = num % 10;
    dec = dec + rem * base;
    num = num / 10;
    base = base * 2;
  }
  // printf("The binary value is: %d \n ", bin);
  printf("Its decimal equivilent is: %d \n ", dec);

  return 0;
}