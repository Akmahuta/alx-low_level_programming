#include "main.h"

/**
 * factorial - Returns factorial of a given number
 * @n: An int
 * Return: Factorial
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
