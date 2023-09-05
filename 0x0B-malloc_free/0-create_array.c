#include "main.h"

/**
 * *create_array - make an array with "size" size and set the char to "c"
 * @size: size of array
 * @c: character in array
 * Return: array if size is > 0 and no problems occur and null if 0 or problem
*/

char *create_array(unsigned int size, char c)
{
	char poi[size];
	char *p = poi;
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			poi[i] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (p);
}
