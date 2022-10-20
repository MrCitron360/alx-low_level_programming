#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * * main - finds and prints the largest prime factor of the number 1231952
 * * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	long num = 1231952;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
