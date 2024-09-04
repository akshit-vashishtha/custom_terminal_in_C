#include "shell.h"

int newfile(char **args) {
    int fd;
    if(args[1]==NULL){
        printf("Please provide a filename\n");
        return -1;
    }
    // Try to open the file with write-only mode, creating it if it doesn't exist
    fd = open(args[1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd < 0) {
        perror("Failed to open file");
        return -1;
    }
    close(fd);
    return -1;
}