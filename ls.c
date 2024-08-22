#include "shell.h"

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int ls() {
    DIR *d;
    struct dirent *dir;
    
    // Open the current directory
    d = opendir(".");
    if (d == NULL) {
        perror("opendir");
        return -1;
    }
    
    printf("Folders:\n");
    // First, list all folders
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_type == DT_DIR) {
            printf("%s\t", dir->d_name);
        }
    }

    // Reset the directory stream
    rewinddir(d);

    printf("\nFiles:\n");
    // Then, list all files
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_type == DT_REG) {
            printf("%s\t", dir->d_name);
        }
    }

    printf("\n");
    // Close the directory
    closedir(d);

    return -1;
}
