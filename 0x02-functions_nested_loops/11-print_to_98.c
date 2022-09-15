#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints n..98
 *
 * @n: number to start at
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n >= 98 || n < 98)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
		(n > 98) ? n-- : n++;
	}
	putchar('\n');
}
