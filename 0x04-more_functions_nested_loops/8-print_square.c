#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size of square
 *
 * Return: Always 0
*/

void print _square(int size)
{
	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}

