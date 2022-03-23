#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: An input string
 * @src: An input string
 * @n: An input integer
 * Return: integer from conversion
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	/* move to the end of the dest string */
	for (i = 0; dest[i] != '\0'; i++);
	/* `i` now point to terminating null character in the dest */
	/* appends `n` characters of the source to the dest string */
	for (j = 0; src[j] != '\0' && j < n; j++) {
		dest[i + j] = src[j];
	}
 
	/* null terminate dest string */
	dest[i + j] = '\0';
 
	/* the dest is returned by standard `strncat()` */
	return dest;
}
