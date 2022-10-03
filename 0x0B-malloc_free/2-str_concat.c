#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ct;
	int m, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = n = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;
	ct = malloc(sizeof(char) * (m + n + 1));

	if (ct == NULL)
		return (NULL);
	m = n = 0;
	while (s1[m] != '\0')
	{
		ct[m] = s1[m];
		m++;
	}

	while (s2[n] != '\0')
	{
		ct[m] = s2[n];
		m++, n++;
	}
	ct[m] = '\0';
	return (ct);
}
