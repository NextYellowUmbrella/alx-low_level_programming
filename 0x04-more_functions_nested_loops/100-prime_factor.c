#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}

	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest prime factor
 *
 * @num: the number input
*/

void largest_prime_factor(long int num)
{
	int prime, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prime = 3; prime <= sqrt(num); prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largest = prime;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
