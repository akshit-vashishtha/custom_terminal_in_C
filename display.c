#include "shell.h"

int display(char **args) {
    if(args[1]==NULL){
        printf("Please give a file name\n");
        return -1;
    }

    FILE *file = fopen(args[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
    printf("\n");
    fclose(file);
    return -1;
}
