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
	int sec;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 5; min++)
		{
			for (sec = 0; sec <= 9; sec++)
			{
				_putchar((hr / 10) + '0');
				_putchar((hr % 10) + '0');
				_putchar(':');
				_putchar(min + '0');
				_putchar(sec + '0');
				_putchar('\n');
			}	
		}
	}
}
