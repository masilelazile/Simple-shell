#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>

/*to create a process*/
void call_fork(char **argv, char *name);

/*to execute another command */
void execmd(char **argv, char *name);

/*to count the number of tokens inputed*/
int tok_num(char *line);

#endif
