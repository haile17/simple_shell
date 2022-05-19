#include "shell.h"
/**
 * built_cd - change directory.
 * @args: arguments
 * Return: Always returns 1, to continue executing.
 */
int built_cd(char **args)
{
if (args[1] == NULL)
{
fprintf(stderr, "lsh: expected argument to \"cd\"\n");
}
else
{
if (chdir(args[1]) != 0)
{
perror("lsh");
}
}
return (1);
}
/*
 * built_help - print help.
 * @args: arguments.
 * Return: Always returns 1, to continue executing.
 */
int built_help(__attribute__((unused)) char **args)
{
printf("Stephen Brennan's LSH\n");
printf("Type program names and arguments, and hit enter.\n");
printf("The following are built in:\n");
printf("Use the man command for information on other programs.\n");
return (1);
}
/**
 * built_exit - exit.
 * @args:  arguments.
 * Return: Always returns 0, to terminate execution.
 */
int built_exit(__attribute__((unused)) char **args)
{
exit(1);
}
/*
 *built_env - print environ
 * @args: arguments
 *Return: Always returns 1, to continue executing.
 */
int built_env(__attribute__((unused)) char **args)
{
char **ptr;

ptr = environ;

while (*ptr)
{
printf("%s\n", *ptr);
ptr++;
}
return (1);
}
