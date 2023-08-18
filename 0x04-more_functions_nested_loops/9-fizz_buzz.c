#include <stdio.h>

/**
 * main - prints numbers 1 - 100 but replaces
 *	multiples of 3 with Fizz
 *	multiples of 5 with Buzz
 *	and multiples of 3 and 5 with FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		printf(" ");
	}

	return (0);
}
