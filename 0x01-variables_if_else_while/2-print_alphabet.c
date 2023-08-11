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
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
