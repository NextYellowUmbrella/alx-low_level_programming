#include <stdio.h>

/**
 * main - enrty point
 *
 * Description: print all lowercase letter from a to z
 *
 * Return: 0 (success)
*/

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	putchar('\n');
	}
	return (0);
}

