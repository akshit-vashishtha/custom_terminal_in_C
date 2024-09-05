#ifndef SHELL_H
#define SHELL_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <utime.h>

/*---PROTOTYPES---*/
/* shell_interactive.c */
void shell_interactive(void);

/* readLine.c */
char *readLine(void);

/* splitLine.c */
char **splitLine(char *line);

/* executeArgs.c */
int executeArgs(char **args);

/* pwd.c*/
int pwd();

/*cd.c*/
int cd(char **args);

/*ls.c*/
int ls();

int newdir(char **args);

int deldir(char **args);

int newfile(char **args);

int delfile(char **args);

int display(char **args);

int copy(char **args);

int clearcontents(char **args);

#endif
