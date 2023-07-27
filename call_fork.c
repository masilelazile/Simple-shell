#include "main.h"

/**
 * call_fork - create a process
 * @arg: argument vector
 * @name: file name
 *
 * Return: NULL
 */
void call_fork(char **argv, char *name);
{
	pid_t pid;

	pid = fork();
	if (pid < 0)
	{
		perror("uable to create a process");
		return;
	} else if (pid == 0)
	{
		execmd(argv, name);
	} else
	{
		int status;

		wait(&status);
	}
}
