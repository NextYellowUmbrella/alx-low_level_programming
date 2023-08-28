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
	char *start = s;

	for (int i = 0; i < n; i++)
	{
		*s[i] = b;
	}
	return (start);
}
