#ifndef SHELL_H
#define SHELL_H

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>

void _print(char *c);
int _strlen(char *s);
void _prompt(void);
void execute_command(char *command);

#endif
