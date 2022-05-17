#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

extern char **environ;
void _puts(char *str);
int _putchar(char c);
char *_strdup(char *str);
char **handletok(char *buffer);
char *pathvalue(char **env);
char *pathch(char *token, char **env);
char *_strstr(char *haystack, char *needle);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strcat(char *dest, char *src);
int _strlen(char *str);
char *_memset(char *s, char b, unsigned int n);
void builtin(char **tokenize, char **env, char **buff, int status);
char *readline(void);
void sfree(char *str);
void nfree(char **str);
void env_builtin(char **env);
void _free(char **tokenize, char *buff);
void __free(char **tokenize, char *buff);
int __exit(int status);
#endif
