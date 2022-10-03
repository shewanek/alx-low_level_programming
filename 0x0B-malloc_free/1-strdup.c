#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * return: 0
 */
char *_strdup(char *str)
{
	char *m;
	int j, n = 0;
	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;
	m = malloc(sizeof(char) * (j + 1));
	if (m == NULL)
		return (NULL);
	for(n = 0; str[n]; n++)
		m[n] = str[n];
	return (m);
}
