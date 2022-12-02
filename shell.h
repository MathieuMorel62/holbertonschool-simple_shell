#ifndef SHELL_H
#define SHELL_H


/* ============ LIBRARY ============= */

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


/* ======= AUXILIAR FUNCTIONS ======== */

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strncmp(char *s1, char *s2, size_t len);

/* =========== PROTOTYPES =========== */

extern char **environ;
int _putchar(char c);
int exec(char **args);
char *f_read(void);
char **tokenize(char *line);

#endif
