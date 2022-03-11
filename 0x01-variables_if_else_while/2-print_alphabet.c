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
	char alfabet_lower;

	for (alfabet_lower = 'a'; alfabet_lower <= 'z'; alfabet_lower++)
		putchar(alfabet_lower);
		putchar('\n');

	return (0);
}
