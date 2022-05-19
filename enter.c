#include "shell.h"
/**
*sfree - free if the variable ~NULL.
*@str: string from main function.
*/
void sfree(char *str)
{
if (str != NULL)
free(str);
}
/**
*nfree - sfree free str.
*@str: string pointer from main function.
*/
void nfree(char **str)
{
if (str)
free(str);
}
/**
*readline - read the buffer input.
*Return: buffer.
*/
char *readline(void)
{
char *buff = NULL;
ssize_t lineptr = 0;
size_t size = 0;

if (isatty(STDIN_FILENO))
_puts("$ ");
lineptr = getline(&buff, &size, stdin);
if (lineptr == -1)
{
free(buff);
if (isatty(0))
_puts("\n");
exit(0);
}
if (buff[lineptr - 1] == '\n')
buff[lineptr - 1] = '\0';
return (buff);
}
