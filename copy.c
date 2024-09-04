#include "shell.h"

#define BUFFER_SIZE 1024

int copy(char **args) {

    int src_fd = open(args[1], O_RDONLY);
    if (src_fd == -1) {
        perror("Error opening source file");
        return -1;
    }

    int dest_fd = open(args[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (dest_fd == -1) {
        perror("Error opening destination file");
        close(src_fd);
        return -1;
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0) {
        if (write(dest_fd, buffer, bytes_read) != bytes_read) {
            perror("Error writing to destination file");
            close(src_fd);
            close(dest_fd);
            return -1;
        }
    }

    if (bytes_read == -1) {
        perror("Error reading source file");
    }

    close(src_fd);
    close(dest_fd);

    return -1;
}
