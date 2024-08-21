#include "shell.h"

int executeArgs(char **args) {
    if(args[0]==NULL) return -1; // empty command was passed

    if (strcmp(args[0], "pwd") == 0) {
        return pwd();  // Execute `pwd` command directly
    }
    if (strcmp(args[0], "exit") == 0) {
        printf("Exiting terminal\n");
        return 0;  // Execute `exit` command directly
    }

    // For testing, just print the tokens
    for (int i = 0; args[i] != NULL; i++) {
        printf("arg[%d]: %s\n", i, args[i]);
    }
    return -1;  // Continue running
}
