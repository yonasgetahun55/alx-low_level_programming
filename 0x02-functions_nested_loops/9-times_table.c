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

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			result = row * col;
			_putchar((result/10) + '0');
			_putchar((result%10) + '0');
			if (col == 9)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
