#include "main.h"
/**
* string_toupper - function
* @c: param
*
* Return: charachter
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\n'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}

	return (c);
}
