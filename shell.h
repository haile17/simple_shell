#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>

int _putchar(char c);
int file_exists(const char *filename);
int _is_numeric(const char *str);
int _atoi(char *s);
int _strcmp(const char *s1, const char *s2);
void _puts(char *str);
void _printenv(void);
void _exit_(char **args);
char **to_args(char *str);
char *_strdup(const char *str);
char *_getenv(const char *name);
char *locate(const char *name);
char *join_paths(char separator, const char *p1, const char *p2);
int exec_cmd(char **args, char *shell_path);
ssize_t _getline(char **line, size_t *max_len, int fd);
void _memcpy(const void *dest, const void *src, const size_t n);
void print_error(char *cmd, char *msg);
size_t _strlen(char *);
void *_realloc(void *ptr, size_t n);
extern char **environ;

#endif
