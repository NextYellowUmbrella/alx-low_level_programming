#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count
	unsigned long fibl = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n"0;
		else
			printf(", ");
	}
	return (0);
}
