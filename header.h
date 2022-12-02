#ifndef SHELL_H
#define SHELL_H


/* ========= LIBRARY ========= */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
<<<<<<< HEAD
#include <signal.h>
=======
#include <sys/types.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <stddef.h>
#include <signal.h>

>>>>>>> ricardo

/* ======== ENVIRONMENT ======== */

extern char **environ;

<<<<<<< HEAD
int _putchar(char c);
int exec(char **args);
char *f_read(void);
=======
/* STRUCTS */

/**
 * struct builtins - struct with builtin commands
 * @argv: arg passed as command
 * @func: correlations function
 * description: this is to handle the builtins
 */
typedef struct builtins
{
	char *argv;
	int (*func)();
} builtins;

char **tokenize(char *userinput);
int shell_loop(int argc, char **argv);
int _putchar(char c);

>>>>>>> ricardo

#endif /* SHELL_h */
