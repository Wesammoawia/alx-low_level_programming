#include "main.h"

/**
*factorial - returns the factorial of a number
*@n: int
*Return: int
*/

int factorial(int n)
{
int res;
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
res = n * factorial(n - 1);
return (res);
}
