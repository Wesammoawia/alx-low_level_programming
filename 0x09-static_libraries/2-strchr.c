#include "main.h"
/**
*char *_strchr - entry pointx
*@s: input
*@c: input
*Return:  always 0 (Success)
*/

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
