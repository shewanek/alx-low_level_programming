#include "holberton.h"
/**
 * main - Print "Holberton" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char hb[] = "Holberton";
	int i = 0;

	while (hb[i] != '\0')
	{
		_putchar(hb[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}