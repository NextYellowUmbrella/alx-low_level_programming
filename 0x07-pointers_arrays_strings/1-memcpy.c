#include "main.h"

/**
 * *_memcpy - copies items in str to dest
 * @src: string to copy
 * @dest: sring location
 * @n: number of letters to copy
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++; n--)
	{
		dest[itr] = src[itr];
	}
	return (*dest);
}
