#ifndef SHELL_H
#define SHELL_H

/*---LIBRARIES---*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<string.h>

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
#endif
