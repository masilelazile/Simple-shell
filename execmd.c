#include "shell.h"

/**
 * execmd - execute a command
 * @argv: argument vector
 * @name: file name
 *
 * Return: NULL.
 */
void execmd(char **argv, char *name)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];

		if (execve(command, argv, NULL) == -1)
			perror(name);
	}
}
