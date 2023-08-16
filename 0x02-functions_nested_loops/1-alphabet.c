#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the lowercase elements
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
