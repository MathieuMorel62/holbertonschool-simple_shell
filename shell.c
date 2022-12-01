#include "shell.h"

/**
 * main - main function for our simple shell
 * description: main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char **argv)
{
	shell_loop(argc, argv);
	return (0);
}

/**
 * shell_loop - shell loop to constantly run the shell
 * description: until the exit command is entered
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int shell_loop(int argc, char **argv)
{
	int userinput;
	char *buffer = NULL;
	size_t bufsize;
	char *prompt = "$ ";
	char **path_tokens = NULL;
	char *executable = NULL;

	(void) argc;

	buffer = NULL;
	while (1)
	{
		/* buffer = malloc(sizeof(char) * bufsize);*/
		   /* if (buffer == NULL) */
		   /* perror("Malloc failure\n"); */
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, prompt, stringlength(prompt));
		}
		userinput = getline(&buffer, &bufsize, stdin);
		if (userinput == -1)
			break;
		argv = tokenize(buffer);
		if (argv[0] == NULL)
			continue;
		if (function_finder(argv, buffer) == 1)
		{
			free(argv);
	free(buffer);
		}
return (0);
}

/**
 * tokenize - tokenize user input
 * description: to breakdown command
 * @userinput: userinput
 * Return: 0
 */
char **tokenize(char *userinput)
{
	int token_inc = 0;
	char *tokenize = NULL;
	char **argv = NULL;
	int tokencount = 0;
	int i;

	strtok(userinput, "\n");
	for (i = 0; userinput[i] != '\0'; i++)
	{
		if (userinput[i] == ' ')
		{
			tokencount++;
		}
	}
	argv = malloc(8 * (tokencount + 2));
	if (argv != NULL)
	{
		token_inc = 0;
		tokenize = strtok(userinput, " ");
		while (token_inc < (tokencount + 1))
		{
			argv[token_inc] = tokenize;
			tokenize = strtok(NULL, " ");
			token_inc++;
		}
		argv[token_inc] = NULL;
	}

	/*free(userinput);*/
	return (argv);
}
