#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * print_rev - function
 * @s: parmameter
 *
 * Return: f
 */
void print_rev(char *s)
{
	int d;

	int len = strlen(s);

	for ( d = len - 1; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');

}
