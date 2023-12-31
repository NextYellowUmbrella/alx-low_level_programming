#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - make an array with "size" size and set the char to "c"
 * @size: size of array
 * @c: character in array
 * Return: array if size is > 0 and no problems occur and null if 0 or problem
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
