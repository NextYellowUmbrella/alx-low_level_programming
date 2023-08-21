#include "main.h"

/**
 * _strlen - gives the length of the sring
 *
 * @s: the string
 *
 * Return: lenght
*/

int _strlen(char *s)
{
	int count;

	for (count = 1; *s != '\0'; s++)
		count++;

	return (count);
}
