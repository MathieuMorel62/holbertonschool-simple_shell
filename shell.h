#ifndef __SHELL__
#define __SHELL__


/* ========= LIBRARY ========= */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>

/* ======== PROTOTYPES ======== */

extern char **environ;
int exec (char **args);
char *f_read (void);
char **tokenize (char *line);
char *get_env (char *command);
char **split_env (char *path);
void print_env (void);
char *check_path (char *command);
void _signal (int sig);


/* =========== AUXILIARIES FUNCTIONS PROTOTYPES ========== */

char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _putchar(char c);

#endif


