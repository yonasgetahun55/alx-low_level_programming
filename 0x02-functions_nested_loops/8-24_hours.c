#include "main.h"
#include<stdio.h>
/**
 * jack_bauer - function
 *
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int min;
	int hr;
	int hrr;
	int sec;

	for (hr = 0; hr <= 2; hr++)
	{
		for (hrr = 0; hrr <= 3; hrr++)
		{
			for (min = 0; min <= 5; min++)
			{
				for (sec = 0; sec <= 9; sec++)
				{
					_putchar(hr + '0');
					_putchar(hrr + '0');
					_putchar(':');
					_putchar(min + '0');
					_putchar(sec + '0');
					_putchar('\n');
				}
				_putchar('\n');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
