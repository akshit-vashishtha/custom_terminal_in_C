#include "shell.h"

int delfile(char **args) {
    if (args[1] == NULL) {
        printf("Please provide a filename\n");
        return -1;
    }

    //checking if file exists or not
    if (access(args[1], F_OK) != 0) {
        printf("File doesn't exist\n");
        return -1; 
    }

    //deleting files
    if (remove(args[1]) == 0) {
        printf("File deleted successfully\n");
        return -1;
    } else {
        perror("Failed to delete file");
        return -1; 
    }
}
