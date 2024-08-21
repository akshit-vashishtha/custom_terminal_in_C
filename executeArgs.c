#include "shell.h"

int executeArgs(char **args) {
    // For testing, just print the tokens
    for (int i = 0; args[i] != NULL; i++) {
        printf("arg[%d]: %s\n", i, args[i]);
    }
    return -1;  // Continue running
}
