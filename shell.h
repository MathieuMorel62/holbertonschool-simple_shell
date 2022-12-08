#ifndef __SHELL__
#define __SHELL__


/* ========= LIBRARY ========= */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

/* ======== PROTOTYPES ======== */

extern char **environ;
struct stat st;
int exec(char **args);
char *get_env(char *env);
char **tokenize(char *str, char *delim);
void _perror(char *name, char *cmd);
char *check_path(char *command);
void print_env(void);
void _signal(int sig);
void free_array(char **array);


/* =========== AUXILIARIES FUNCTIONS PROTOTYPES ========== */

char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);

#endif


