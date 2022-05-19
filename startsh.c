#include "shell.h"
/**
* env_builtin - enviroment built-in.
* @env: the array of string of environment values.
*/
void env_builtin(char **env)
{
int i;

if (env)
{
for (i = 0; env[i]; i++)
{
_puts(env[i]);
_putchar('\n');
}
}
}
/**
* main - run simple shelll finally.
* @ac: argument count.
* @av: argument var.
* @env: array of string.
* Return: Always 0.
*/
int main(int ac, __attribute__((unused))char **av, char **env)
{
char *buff = NULL, *path, **tokenize;
int status = 0, number = 0;
pid_t pid;
(void)ac;

while (1)
{
buff = readline();
tokenize = NULL;
tokenize = handletok(buff);
if (!tokenize)
continue;
builtin(tokenize, env, &buff, number);
pid = fork();
if (pid == -1)
{
perror("Error:");
__free(tokenize, buff);
return (1);
}
if (pid == 0)
{
path = pathch(tokenize[0], env);
if (execve(path, tokenize, NULL) == -1)
{
perror(tokenize[0]);
_free(tokenize, buff);
exit(0);
}
}
else
{
_free(tokenize, buff);
wait(&status);
number = __exit(status);
}
}
__free(tokenize, buff);
return (0);
}
/**
* _free - free variable for main.
* @tokenize: the array of strings from main.
* @buff: buffer input from main function.
*/
void _free(char **tokenize, char *buff)
{
int i;

for (i = 0; tokenize[i]; i++)
free(tokenize[i]);
nfree(tokenize);
sfree(buff);
}
/**
* __free - free variable for main.
* @tokenize: the array of strings from main.
* @buff: buffer input from main function.
*/
void __free(char **tokenize, char *buff)
{
nfree(tokenize);
sfree(buff);
}
/**
* __exit - return exit frommm child process
* @status: exit value.
* Return: exit value.
*/
int __exit(int status)
{
int number;

if (WIFEXITED(status))
number = WEXITSTATUS(status);
return (number);
}
