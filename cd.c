#include "shell.h"

int isValidPath(char *path) {
    if (strcmp(path, "..") == 0) {
        return 1;
    }

    if (strstr(path, "...") != NULL) {
        return 0;
    }
    return 1;
}

int cd(char **args) {
    if (args[1] == NULL) {
        printf("No directory provided\n");
        return -1;
    }

    if (!isValidPath(args[1])) {
        printf("Invalid directory: %s\n", args[1]);
        return -1;
    }

    if (chdir(args[1]) == 0) {
        printf("Changed directory to %s\n", args[1]);  // Success
    } else {
        perror("Error changing directory");
    }

    return -1;
}