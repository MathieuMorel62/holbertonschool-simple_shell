#ifndef SHELL_H
#define SHELL_H


/* ========= LIBRARY ========= */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <stddef.h>
#include <signal.h>

/* ======== PROTOTYPES ======== */

extern char **environ;
int _putchar(char c);
int exec(char **args);
char *f_read(void);
char **tokenize(char *userinput);

#endif /* SHELL_H */
