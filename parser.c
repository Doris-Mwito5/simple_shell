#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

/**
 * parse_input - utiulises input from stdin and tokenizes
 *		it into arguments array
 * @input: buffer containing the input from stdin
 * @input_copy: a buffer used to store arguments
 * @argv: an array of arguments
 * Return: the number of arguments parsed
 */

int parse_input(char *input, char *input_copy, char **argv)
{
	char *arg;
	int argc = 0, a = 0;

	arg = strtok(input, " \n");

	while (arg != NULL)
	{
		argc++;
		arg = strtok(NULL, " \n");
	}
	argc++;

	argv = malloc(sizeof(char *) * argc);

	if (argv == NULL)
	{
		free(argv);
		exit(EXIT_FAILURE);
	}

	arg = strtok(input_copy, " \n");

	for (a = 0; arg != NULL; a++)
	{
		argv[a] = malloc(sizeof(char) * _strlen(arg));

		if (argv[a] == NULL)
		{
			free(argv[a]);
			exit(EXIT_FAILURE);
		}
		strcpy(argv[a], arg);

		arg = strtok(NULL, " \n");
	}
	argv[a] = NULL;
	execute_command(argv);
	free(argv);
	return (a);
}
