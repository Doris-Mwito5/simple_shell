#ifndef COMMANDS_H
#define COMMANDS_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include "general.h"
#include "builtins.h"
#include "error.h"
#include "text.h"
#include "memory.h"

extern char **environ;


void execute(char *commands, char **arguments, general_t *info, char *buff);
int current_directory(char *cmd, char **arguments, char *buff,
		general_t *info);


int is_executable(char *filename);
int is_file(char *command);


char *_getenv(const char *name);
char *which(char *filename, general_t *info);
void is_current_path(char *path, general_t *info);
void get_full_env(void);

void analyze(char **arguments, general_t *info, char *buff);

#endif
