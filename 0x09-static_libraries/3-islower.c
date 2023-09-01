#include "main.h"

/**
 * _islower - check if a letter is lower case or not
 *
 * @c: checks input of function
 *
 * Return:  0 if 'c' is  upper and return 1 if lower
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
