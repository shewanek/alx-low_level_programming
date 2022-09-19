#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lg = 0;
	int r;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	s--;
	for (r = lg; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
