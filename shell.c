#include "shell.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on sucess, 1 on error
 */
int main(int argc, char **argv)
{
	char *line, *line_copy, *delim = " \n", *token = NULL, *name = argv[0];
	ssize_t read;
	size_t n = 0;
	int num_tok = 0, i;
	(void)argc;

	while (1)
	{
		_puts("$ ");
		read = getline(&line, &nm stdin);
		line_copy = malloc(sizeof(char) * read);
		_strcpy(line_copy, line);
		num_tok = tok_num(line);
		argv = malloc(sizeof(char *) * num_tok);
		token = strtok(line_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * _strlen(token));
			_strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		call_fork(arv, name);
	}
	free(line);
	free(line_copy);
	return (0);
}
