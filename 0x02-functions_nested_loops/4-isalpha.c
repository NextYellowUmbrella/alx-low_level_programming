#include "main.h"

/**
 * _isalpha -  states whether input c is part of the alphabet or not
 *
 * Return: 1 when 'c' is a leter upper or lowercase otherwise return 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
