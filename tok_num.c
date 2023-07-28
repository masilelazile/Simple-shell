#include "main.h"

/**
 * tok_num - calculate the number of tokens inputed
 * @line: token to be counted
 *
 * Return: number of tokens counted
 */

int tok_num(char *line)
{
	char *token;
	char *delim = " \n";
	int toknum;

	token = strtok(line, delim);
	while (token != NULL)
	{
		toknum++;
		token = strtok(NULL, delim);
	}
	toknum++;
	return (toknum);
}
