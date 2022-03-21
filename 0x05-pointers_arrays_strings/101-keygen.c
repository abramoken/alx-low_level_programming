#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords,
 * for the program 101-crackme.
 *
 * Return: Nothing
 */

int main(void)
{
	int x;

	srand((time(0)));

	x = rand();
	printf("%i\n", x);

	return (0);
}
