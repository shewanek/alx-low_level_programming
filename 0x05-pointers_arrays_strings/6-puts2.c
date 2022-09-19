#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lg = 0;
	int n = 0;
	char *m = str;
	int i;

	while (*m != '\0')
	{
		m++;
		lg++;
	}
	n = lg - 1;
	for (i = 0 ; i <= n ; i++)
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
