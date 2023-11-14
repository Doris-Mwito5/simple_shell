#include "shell.h"

/**
 * clear_shell - terminal screen is cleared.
 * @args: an array of arguments
 *
 * Return: 1 to continue executing, 0 to exit
*/
int shell_clear(char **args)
{
	(void)args; /* avoid "unused parameter" warning */
	_puts("\033[2J\033[H");
	return (1);
}
