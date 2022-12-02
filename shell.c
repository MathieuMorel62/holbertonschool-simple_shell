/**
 * tokenize - tokenize user input
 * description: to breakdown command
 * @line: line
 * Return: 0
 */
char **tokenize(char *line)
{
	int token_inc = 0;
	char *tokenize = NULL;
	char **argv = NULL;
	int tokencount = 0;
	int i;

	strtok(line, "\n");
	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == ' ')
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
