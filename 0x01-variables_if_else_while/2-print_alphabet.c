#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abclow;

	for (abclow = 'a'; abclow <= 'z'; abclow++)
		putchar(abclow);
		putchar('\n');

	return (0);
}
