#include "shell.h"

int cd(char **args) {
    if (args[1] == NULL) {
        printf("No directory provided\n");
        return -1;
    } 
    else if (strcmp(args[1], "..") == 0) {
        if (chdir("..") == 0) {
            printf("Changed directory to parent\n");
        } else {
            perror("Error changing directory");
        }
        return -1;
    } 
    else {
        if (chdir(args[1]) == 0) {
            printf("Changed directory to %s\n", args[1]);
        } else {
            perror("Error changing directory");
        }
        return -1;
    }
}

// chdir("string") will change directory to string path if it changes successfully it return 0 else -1

