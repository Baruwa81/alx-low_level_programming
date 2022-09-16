#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  largest_number - Returns largest number
 *  @a: first num
 *  @b: second num
 *  @c: third num
 *
 *  Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
