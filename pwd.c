#include "shell.h"

#include <stdio.h>
#include <unistd.h>

int pwd() {
    char wd[1000];
    if (getcwd(wd, sizeof(wd)) != NULL) {
        printf("Current working directory: %s\n", wd);
    } else {
        perror("getcwd() error");
    }
    return -1;
}

