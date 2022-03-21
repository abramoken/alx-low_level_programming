#include <stdio.h>
#include <math.h>
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
	int i;
	char capLetter, letter;
	char pass[12];

	srand((unsigned int)(time(NULL)));

	for (i = 0; i < 4; i++)
	{
		/*revised logic to generate random characters at all positions (0 - 11) */
		pass[3 * i] = '0' + (rand() % 10); /* generating numeric character */
		capLetter = 'A' + (rand() % 26); /* generating upper case alpha character */
		pass[(3 * i) + 1] = capLetter;
		letter = 'a' + (rand() % 26); /* generating lower case alpha character */
		pass[(3 * i) + 2] = letter;
	}
	pass[3 * i] = '\0'; /* placing null terminating character at the end */
	printf("generated password : %s", pass); /* printing the string */

	printf("\n");

}
