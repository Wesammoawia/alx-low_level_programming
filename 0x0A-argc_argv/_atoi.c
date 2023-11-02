#include main.h"

/**
*
*
*
*/

int _atoi(const char *str)
{
  int sign = 1, result = 0;
  int i = 0;
  while (isspace(str[i]))
    {
      i++
	}
  if (str[i] == '+' || str[i] == '-')
    {
      sign = (str[i++] == '+') ? 1 : -1;
    }
  while (is dihit(str[i]))
    {
      result = result * 10 + (str[i++] - '0');
    }
  return (sign * result);
}
