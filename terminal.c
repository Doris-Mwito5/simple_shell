#include "shell.h"

/**
 * shell_clear - a program for clearing the terminalclears the terminal
 * @args: passed arguments
 * Return: returns 1 on execution and 0 to exit
 */
int shell_clear(char **args)
{
	(void)args;
	_puts("\033[2J\033[H");
	return (1);
}
