#include "main.h"
/**
 * cap_string - function
 * @c: parameter
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' ||  c[i] == ',' ||  c[i] == ';' ||  c[i] == '.' ||  c[i] == '!' ||  c[i] == '?' ||  c[i] == '\"' ||  c[i] == '(' ||  c[i] == ')' ||  c[i] == '{' ||  c[i] == '}')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] = c[i + 1] - 32;
		}
	}

	return (c);
}
