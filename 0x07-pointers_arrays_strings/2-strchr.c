#include "main.h"

/**
 * *_strchr - locate a string
 *
 *@s: string
 *@c: character
 *
 * Return: null if noe and c in c if yes
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'  ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
