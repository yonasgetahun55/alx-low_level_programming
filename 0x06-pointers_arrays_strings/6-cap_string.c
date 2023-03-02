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
	int j;
	char check[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (c[i] == check[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] = c[i + 1] - 32;
			}
		}
	}

	return (c);
}
