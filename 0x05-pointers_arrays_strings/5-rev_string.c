#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - function
 * @s: parmaeters
 *
 * Return: jvoid
 */
void rev_string(char *s)
{
	int i;

	int j = 0;

	char c [9];

	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		c[j] = s[i];
		j++;
	}
	
	for (i = 0; i <= len-1; i++)
	{
		s[i] = c[i];
	}

	putchar('\n');
}
