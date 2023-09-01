#include "main.h"

/**
 * *_memset - changes n chars of s into "b"
 *
 * @s: string
 * @b: "b"
 * @n: amount of chars to change
 *
 * Return: start
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
