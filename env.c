#include "shell.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * shell_env -the program that prints environmental variables
 * Returns 0 on succesful execution, otherwise,void.
 */
int shell_env(void)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}

	return (0);
}
