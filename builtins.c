#include "shell.h"
/**
*builtin - built-in command for shell.
*@tokenize: value tokenized the buffer in startsh file.
*@env: array of string to environ values.
*@buff: buffer input from main.
*@status: value of the exit.
*/
void builtin(char **tokenize, char **env, char **buff, int status)
{
int i;
(void)buff;

if (_strcmp(tokenize[0], "exit") == 0)
{
for (i = 0; tokenize[i]; i++)
free(tokenize[i]);
free(*buff);
free(tokenize);
exit(status);
}
if (_strcmp(tokenize[0], "env") == 0)
{
if (!tokenize[1])
env_builtin(env);
}
}
