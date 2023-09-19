#include "main.h"
/**
 *print_rev - print a string in reverse
 *@s: string to be reversed
 *Return: void
 */
void print_rev(char *s)
{
  int leng = 0;
  int i;
  while (*s != '\0')
    {
      leng++;
      s++;
    }
  s--;
  for (i = leng; i > 0; i--)
    {
      _putchar(*s);
      s--;
    }
  _putchar('\n');
}
  
