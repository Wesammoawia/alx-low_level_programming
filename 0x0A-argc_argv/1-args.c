#include <stdio.h>

/**
* main - print the number of argument passed to the program
*@argc: number of argumets
*@argv: array of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
(void) argv; /*ignore ardv*/
printf("%d\n", argc - 1);
return (0);
}
