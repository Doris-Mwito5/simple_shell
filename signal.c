#include "shell.h"

/**
 * handle_sigint - a program to handle signals
 * @sig: the signal number
 * Return: returns 0 on succesful  execution
 */
void handle_sigint(int sig)
{
	(void) sig;
	_putchar('\n');
	prompt();
}

/**
 * handle_sigquit -a program to handle signals
 * @sig: the signal number
 * Return: returns 0 on succesful execution
 */
void handle_sigquit(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 * handle_sigstp - a program to handle signals
 * @sig: the signal number
 * Return:returns 0 on succesful execution
 */
void handle_sigstp(int sig)
{
	(void) sig;
	_puts("\n");
	prompt();
}
