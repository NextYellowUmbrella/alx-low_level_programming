#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times using the putchar function
 *		from a-z
*/

void print_alphabet_x10(void)
{
	int ch = 97;
	int count = 0;

	while (count < 10)
	{
		_putchar(ch);
		ch++;
		if (ch == 123)
		{
			_putchar('\n');
			count++;
			ch = 97;
		}
	}
}
