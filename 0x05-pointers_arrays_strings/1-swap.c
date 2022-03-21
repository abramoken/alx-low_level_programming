#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
