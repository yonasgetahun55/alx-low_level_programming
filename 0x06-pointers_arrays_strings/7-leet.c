#include "main.h"
/**
 * leet - function
 * @c: parameter
 *
 * Return: character
 */
char *leet(char *c)
{
	int i, j;
	char sml[] = "aeotl";
	char cap[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == sml[j] || c[i] == cap[j])
				c[i] = num[j];
		}
	}

	return (c);
}
