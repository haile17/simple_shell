#include "shell.h"
/**
 * _strdup - create an array with special charcter.
 * @str: character value.
 * Return: .
 */
char *_strdup(char *str)
{
unsigned int i;
char *s;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != 0; i++)
;
i = i + 1;
s = malloc(sizeof(char) * i);
if (s == NULL)
return (NULL);
if (s != NULL)
{
for (i = 0; str[i] != 0; i++)
s[i] = str[i];
}
s[i] = '\0';
return (s);
}
/*
 * handletok - takes buffer input and tokenizes it
 * @buffer: buffer input from main function.
 * Return: array of string after tokenize.
 */
char **handletok(char *buffer)
{
char *token, **arr;
int i, word = 1, flag = 0, j = 0;

for (i = 0; buffer[i] && buffer[i + 1]; i++)
{
if (buffer[i] != ' ')
flag = 1;
if (buffer[i] == ' ')
flag = 0;
if (flag == 0 && buffer[i] == ' ' && buffer[i + 1] != ' ')
word++;
}
arr = malloc(sizeof(char *) * (word + 1));
if (!arr)
return (NULL);
token = strtok(buffer, " \t\n");
if (!token)
{
free(arr);
return (NULL);
}
while (token)
{
arr[j] = _strdup(token);
token = strtok(NULL, " \t\n");
j++;
}
arr[j] = NULL;
return (arr);
}
