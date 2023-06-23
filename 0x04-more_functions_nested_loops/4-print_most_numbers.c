#include "main.h"

/**
 * print_most_numbers - prints 01356789
 * Return: void
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	putchar('\n');
}
