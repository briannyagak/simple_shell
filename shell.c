#include "shell.h"

/**
 * main - main shell code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *buf = NULL;
	size_t n = 0;
	int bytes;

	while (1)
	{
		_prompt();
		bytes = getline(&buf, &n, stdin);
		if (bytes == -1)
		{
			perror("Error, getline");
			free(buf);
			exit(EXIT_FAILURE);
		}
		else if (buf == NULL)
		{
			_print("\n");
			exit(EXIT_SUCCESS);
		}
		if (buf[bytes - 1] == '\n')
		{
			buf[bytes - 1] = '\0';
		}

		execute_command(buf);
	}

	return (0);
}

