#include "main.h"

/**
 * print_numbers - print all decimal numbers
 *
 * Returns: always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
