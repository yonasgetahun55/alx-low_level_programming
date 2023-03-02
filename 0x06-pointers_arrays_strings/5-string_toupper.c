#include "main.h"
#include <ctype.h>
#include <string.h>
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
		c[i] = toupper(c[i]);
	}

	return (c);
}
