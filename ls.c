#include "shell.h"

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int ls() {
    DIR *d;
    struct dirent *dir;
    
    // inside the struct dirent there are many data member out of which we are using 2 namely -> d_type (tells whether current entry if directory or file) and d_name (tells name of file or directory)

    // Open current directory
    d = opendir(".");
    if (d == NULL) {
        perror("opendir");
        return -1;
    }
    
    printf("Folders:\n");
    //list all folders
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_type == DT_DIR) { //DT_DIR means directory
            printf("%s\t", dir->d_name); //note max length of dname is 255
        }
    }

    rewinddir(d); // resetting directory stream to the beggining of the directory to read files 

    printf("\nFiles:\n");
    // list all files
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_type == DT_REG) { //DT_REG means regular file
            printf("%s\t", dir->d_name);
        }
    }

    printf("\n");
    closedir(d);

    return -1;
}
