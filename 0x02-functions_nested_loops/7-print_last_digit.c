#include "main.h"

/**
 * print_last_digit -> prints the last digit
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;
	x = n % 10;
	_putchar('0' + x);
	return (x);
}
