#include "main.h"

/**
 * swap_int - swaps the values of a and b
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
