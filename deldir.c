#include "shell.h"

int deldir(char **args) {
    if (args[1] == NULL) {
        fprintf(stderr, "Error: Directory name not provided\n");
        return -1;
    }

    const char *directoryName = args[1];

    // Remove the directory
    if (_rmdir(directoryName) == -1) {
        perror("Error removing directory");
        return -1;
    }

    printf("Directory removed successfully\n");
    return -1;  // Return 0 on success
}
