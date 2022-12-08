#include "shell.h"

/**
 * free_array - function that frees a 2 dimensional array
 * @array: the array
 */
void free_array(char **array)
{
	int i = 0;

	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
