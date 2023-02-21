#include "main.h"

/**
 * print_alphabet - displays the alpahbets
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
}
