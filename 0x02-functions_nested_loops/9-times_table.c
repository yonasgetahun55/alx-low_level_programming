#include "main.h"
/**
 * times_table -  function name
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;
	int result;

	for (row = 0; row <= 10; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
