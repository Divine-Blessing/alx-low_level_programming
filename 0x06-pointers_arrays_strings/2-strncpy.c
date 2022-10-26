#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: a pointer to the returning string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *random = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (random);
}
