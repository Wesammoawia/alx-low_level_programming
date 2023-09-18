#include "main.h"
/**
* swap_int - swap the value of two intgers
* @a, @b: intgers to swap values of each
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
