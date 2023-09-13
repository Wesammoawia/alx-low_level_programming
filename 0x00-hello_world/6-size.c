#include <stdio.h>
/**
* main - A program that prints the size of various computer types
* Return: 0 (Success)
*/
int main(void)
{
  char c;
  int i;
  long int num;
  long long int num1;
  float f;
  printf("Size of a char: %lu byte(s)\n", (unsigend long) sizeof(c));
  printf("Size of a int: %lu byte(s)\n", (unsigned lond)sizeof(i));
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num));
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(num1));
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
