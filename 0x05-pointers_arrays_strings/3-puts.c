#include "main.h"
/**
*_put - sprints a string, followed by a new line, to stdout
*@str: the string to be printed
*Return: void
*/

void _puts(char *str)
{ char a = *str;
while (*str != '\0')
{
_putchar(a++);


_putchar('\n');
 }
}
