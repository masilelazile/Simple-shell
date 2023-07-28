#include "shell.h"

/**
 * _strlen - return length of a string
 * @s: string to be counted
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
		i++;
	return (i);
}

/**
 * _strcpy - copy a string
 * @dest: where to copy
 * @src: where to copy from
 *
 * Return: pointer to destiantion
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i]
			i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: NULL
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != NULL)
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - output a character
 * @c: character to be outputed
 *
 * Return: 1 on suces, -1 on erro
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
