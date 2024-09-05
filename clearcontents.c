#include "shell.h"

int clearcontents(char **args){
    if(args[1]==NULL){
        printf("Pleade provide a file name\n");
        return -1;
    }

    if (access(args[1], F_OK) != 0) {
        printf("File doesn't exist\n");
        return -1; 
    }
    FILE *file = fopen(args[1], "w");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }
    fclose(file); 
    printf("Cleared contents of file: %s\n", args[1]);
    return -1;
}