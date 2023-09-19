#include "main.h"
/**
* _strlen - returns the lenghth of a string
* @s: string to be checked
* Return: integer
*/
int * strlen(char *s)
{
static int *leng;
*leng = sizeof(*s);
return leng;
}
