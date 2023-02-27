#include "main.h"
/**
 * rev_string - function
 * @s: parmaeters
 *
 * Return: jvoid
 */
void rev_string(char *s)
{
	int i;

	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
