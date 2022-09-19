#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * @temp: temporary varible
 */
void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
