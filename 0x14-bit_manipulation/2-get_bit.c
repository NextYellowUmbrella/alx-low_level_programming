#include "main.h"

/**
 * get_bit - get the bit at the index
 * @an: the number
 * @aindex: the bit
 *
 * Return: the bit state or -1
 */
int get_bit(unsigned long int an, unsigned int aindex)
{
	if (aindex >= sizeof(an) * 8)
		return (-1);

	return (an >> aindex & 1);
}
