#ifndef GENERAL_H
#define GENERAL_H

#define _TRUE            1
#define _FALSE           0

#define STDIN            0
#define STDOUT           1
#define STDERR           2

#define NON_INTERACTIVE  0
#define INTERACTIVE      1

#define PERMISSIONS      1
#define NON_PERMISSIONS -1

#define _FILE            10
#define NON_FILE         -10

#define _ENOENT          "No such file or directory"
#define _EACCES          "Permission denied"
#define _CMD_NOT_EXISTS  "not found"
#define _ILLEGAL_NUMBER  "Illegal number"

#define _CODE_ENOENT           3
#define _CODE_EACCES           13
#define _CODE_CMD_NOT_EXISTS   132
#define _CODE_ILLEGAL_NUMBER   133
typedef struct __attribute__((__packed__))
{
	int argc;
	char **argv;
	int mode;
	int error_code;
	char *command;            /* Command to execute */
	int n_commands;           /* Number of commands executed */
	char *value_path;         /* Path of a command */
	int is_current_path;      /* Check if is current path or not */
	int status_code;          /* Last exit code */
	char *buffer;             /* Line readed with the getline */
	char **arguments;         /* Line splited into words */
	char *environment;        /* Last environment variable get it */
	int pid;                  /* Process id */
} general_t;

typedef struct __attribute__((__packed__))
{
	char *message;
	int code;
} error_t;

typedef struct __attribute__((__packed__))
{
	char *command;
	void (*func)(general_t *info, char **arguments);
} builtin_t;

#endif
