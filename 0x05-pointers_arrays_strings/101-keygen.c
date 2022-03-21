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
	char pass[12];

	srand((unsigned int)(time(NULL)));

	printf("Press enter to get a twelve-character password\n");
	getchar();

	for (i = 0; i < 12; i++)
	{
		pass[i] = 33 + rand() % 94;
	}
	pass[i] = '\0';
	printf("%s\n", pass);
}
