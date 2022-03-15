#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char a_z_letters;

	for (a_z_letters = 'a'; a_z_letters <= 'z'; a_z_letters++)
		_putchar(a_z_letters);

	_putchar('\n');
}
