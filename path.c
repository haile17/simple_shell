#include "shell.h"
/**
* pathvalue - value of environ.
* @env: an array of string to environ
* Return: token or NULL.
*/
char *pathvalue(char **env)
{
char *token, *temp;
int i = 0;

while (env[i])
{
temp = env[i];
token = strtok(temp, "=");
if (_strcmp(token, "PATH") == 0)
{
token = strtok(NULL, "=");
return (token);
}
i++;
}
return (NULL);
}
/**
* _strstr -  a function that locates a substring..
* @haystack: string character value.
* @needle: substring character value.
* Return: Returns a pointer to substring.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j = 0;

if (needle[j] == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0' && haystack[i + j]
&& needle[j] == haystack[i + j]; j++)
;
if (needle[j] == 0)
return (haystack + i);
}
}
return (0);
}
/**
* pathch - tokenize path and check if the buffer exists.
* @token: the string tokenizedddd the buffer in startsh file.
* @env: array of string to environ.
* Return: the buffer.
*/
char *pathch(char *token, char **env)
{
static char buffer[1024] = {0};
char *path, *a, *b, *tok;
struct stat st;

path = pathvalue(env);
if (!path)
path = "";
a = _strstr(path, "::");
b = _strstr(path, ":/bin");
if (path[0] == ':' || (a && (a < b)))
{
if (stat(token, &st) == 0)
return (token);
}
tok = strtok(path, ":");
while (tok)
{
_strcat(buffer, tok);
_strcat(buffer, "/");
_strcat(buffer, token);
if (stat(buffer, &st) == 0)
return (buffer);
tok = strtok(NULL, ":");
_memset(buffer, 0, 1024);
}
return (token);
}
