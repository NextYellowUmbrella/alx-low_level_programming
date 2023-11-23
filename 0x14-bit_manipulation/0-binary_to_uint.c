#include "main.h"

/**
 * binary_to_uint - converts a binary number s
 * @ab: the binary number as
 *
 * Return: unsigned inm of b
 */
unsigned int binary_to_uint(const char *ab)
{
	unsigned int num = 0;

	if (!ab)
		return (0);
	while (*ab)
	{
		if (*ab != '0' && *ab != '1')
			return (0);
		num = num * 2 + (*ab++ - '0');
	}
	return (num);
}
