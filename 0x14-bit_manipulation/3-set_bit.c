#include "main.h"

/**
 * set_bit - sets the bit
 * @an: the number
 * @aindex: the bit
 *
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *an, unsigned int aindex)
{
	if (aindex >= sizeof(an) * 8)
		return (-1);

	return (!!(*an |= 1L << aindex));
}
