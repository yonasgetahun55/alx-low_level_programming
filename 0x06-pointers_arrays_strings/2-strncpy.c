#include "main.h"
#include <string.h>
/**
 * _strncpy -  function
 * @dest: first param
 * @src: second param
 * @n: third para
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
