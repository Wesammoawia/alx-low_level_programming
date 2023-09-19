#include "main.h"
/**
 *print_rev - print a string in reverse
 *@s: string to be reversed
 *Return: void
 */
void print_rev(char *s)
{
  int size = strlen(s);
  char rev[size];
  rev[size] = {s};

  
