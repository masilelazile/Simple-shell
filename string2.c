#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination buffer
 * @src: The source buffer
 *
 * Return: Pointer to destination buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return ret;
}

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string
 */

char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
	{
		return NULL;
	}

	while (str[length])
	{
		length++;
	}

	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
	{
		return NULL;
	}

	for (length = 0; str[length]; length++)
	{
		ret[length] = str[length];
	}

	ret[length] = '\0';
	return ret;
}
