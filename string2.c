#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: pointer to destination buffer
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
	*dest = *src;
	return ret;
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string
 */

char *_strdup(const char *str) 
{
	int length = 0;
	char *ret;
	
	if (str == NULL) 
	{
		return NULL;
	}
	while (*str++) 
	{
		length++;
	}
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
	{
		return NULL;
	}
	for (length++; length--;) 
	{
		ret[length] = *--str;
	}
	return ret;
}
