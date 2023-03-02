#include "main.h"
#include <string.h>
/**
 * reverse_array - function
 * @a: first param
 * @n: second param
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int size;
	int count;
	int i;
	int k;

	size = n;
	count = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		k = a[i];
		a[i] = a[count];
		a[count] = k;
		count--;
	}
}
