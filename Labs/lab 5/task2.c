#include <stdio.h>
int main()
{
  system("cls");
  int n = 0;
  long long base9 = 0;
  int rem, i = 1;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  while (n != 0)
  {
    rem = n % 9;
    n = n / 9;
    rem = rem * i;
    base9 = base9 + rem;
    i = i * 10;
  }
  printf("base -9 : %d", base9);

  return 0;
}