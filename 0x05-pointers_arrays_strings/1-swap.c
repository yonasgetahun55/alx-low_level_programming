#include "main.h"
/**
 * swap_int - swaping function
 * @a: first parameter
 * @b: second paramater
 *
 * Return: noting to return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
