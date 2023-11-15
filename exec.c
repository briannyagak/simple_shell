#include "shell.h"

/**
 * execute_command - executes the command
 * @command: command to be executed
 *
 */

void execute_command(char *command)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *args[128];
		int arg_count = 0;

		char *token = strtok(command, " ");

		while (token != NULL)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_count] = NULL;

		execve(args[0], args, NULL);

		_print("Error executing command\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
