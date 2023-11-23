#include "main.h"

/**
 * clear_bit - clears the bit
 * @an: the number
 * @aindex: the bit
 *
 * Return: 1 if successful, -1 on error
 */
int clear_bit(unsigned long int *an, unsigned int aindex)
{
	if (aindex >= sizeof(an) * 8)
		return (-1);

	if (*an & 1L << aindex)
		*an ^= 1L << aindex;
	return (1);
}
