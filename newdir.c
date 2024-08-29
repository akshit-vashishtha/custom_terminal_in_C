#include "shell.h"


int newdir(char **args) {
    if (args[1] == NULL) {
        fprintf(stderr, "Error: Directory name not provided\n");
        return -1;
    }

    const char *directoryName = args[1];

    // Create the directory
    if (_mkdir(directoryName) == -1) {
        perror("Error creating directory");
        return -1;
    }

    printf("Directory created successfully\n");
    return -1;  // Return 0 on success
}
