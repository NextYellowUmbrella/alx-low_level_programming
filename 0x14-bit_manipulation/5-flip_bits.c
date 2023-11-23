#include "main.h"

/**
 * flip_bits - return number of bits need to be flipped to
 * transform one number to another
 *
 * @an: first number
 * @am: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int an, unsigned long int am)
{
	unsigned long int xorval = an ^ am;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
