#include "main.h"
/**
* _strlen - returns the lenghth of a string
* @s: string to be checked
* Return: length
*/
int  _strlen(char *s)
{
int leng = 0;
while (*s != '\0')
{
leng++;
s++;
}
return (leng);
}
