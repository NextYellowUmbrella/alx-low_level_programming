#include "main.h"

/**
 * print_binary - prints a number as binary
 * @an: the number
 *
 * Return: void
 */
void print_binary(unsigned long int an)
{
	int bit = sizeof(an) * 8, printed = 0;

	while (bit)
	{
		if (an & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
