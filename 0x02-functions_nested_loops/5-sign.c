#include "main.h"
/**
 * print_sign - fucntion doing job
 * @n: the character to check sign
 *
 * Return: returns either 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
