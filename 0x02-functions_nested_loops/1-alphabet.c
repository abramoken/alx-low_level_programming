#include "main.h"

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
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
