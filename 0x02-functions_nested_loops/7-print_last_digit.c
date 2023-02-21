#include "main.h"
#include<stdio.h>
/**
 * print_last_digit - function
 * @n: the digit
 *
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int y;

	if (n >= 0)
	{
		y = n % 10;
	}
	else
	{
		y = -(n % (-10));
	}
	_putchar(y + '0');
	return (y);
}
