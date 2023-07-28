#include "main.h"

/**
 * tok_num - calculate the number of tokens inputted
 * @line: token to be counted
 *
 * Return: number of tokens counted
 */

int tok_num(char *line)
{
    char *token;
    char *delim = " \n";
    int toknum = 0; // Initialize toknum to 0

    token = strtok(line, delim);
    while (token != NULL)
    {
        toknum++;
        token = strtok(NULL, delim);
    }
    return toknum;
}
