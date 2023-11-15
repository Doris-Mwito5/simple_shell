#include "shell.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Include this header for environ
 * shell_env -the program that prints environmental variables
 * Returns 0 on succesful execution.
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

/**
 * Example implementation of _puts and _putchar (replace with your
 * actual implementations)
 */
void _puts(const char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

void _putchar(char c)
{
	putchar(c);
}
