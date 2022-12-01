#ifndef __SHELL__
#define __SHELL__


/* ========= LIBRARY ========= */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

/* ======== PROTOTYPES ======== */

extern char **environ;

int _putchar(char c);
int exec(char **args);
char *f_read(void);

#endif
