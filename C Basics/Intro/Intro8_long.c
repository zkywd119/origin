#include <stdio.h>

int main()
{
  printf("Size of int: %ld bytes.\n", sizeof(int));
  printf("Size of long: %ld bytes.\n", sizeof(long));
  printf("Size of long long: %ld bytes.\n", sizeof(long long));
  printf("Size of double: %ld bytes.\n", sizeof(double));
  printf("Size of long double: %ld bytes.\n", sizeof(long double));

  return 0;
}
