#include "main.h"
/**
* swap_int - swap the value of two intgers
* @a: intgers to swap its value with other integer 
* @b: integer to swap value with
* Return: void
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
return;
}
