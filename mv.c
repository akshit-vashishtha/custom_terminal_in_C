#include "shell.h"

int mv(char **args) {
    if (args[1] == NULL || args[2] == NULL) {
        printf("move: Missing source or destination argument.\n");
        return -1;
    }

    FILE *source, *dest;
    char ch;
    char dest_path[1024]; 

    strcpy(dest_path, args[2]);

    if (dest_path[strlen(dest_path) - 1] != '/') {
        strcat(dest_path, "/");
    }

    strcat(dest_path, args[1]);

    source = fopen(args[1], "r");
    if (source == NULL) {
        printf("move: Cannot open source file: %s\n", args[1]);
        return -1;
    }

    dest = fopen(dest_path, "w");
    if (dest == NULL) {
        printf("move: Cannot open destination file: %s\n", dest_path);
        fclose(source);
        return -1;
    }


    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }


    fclose(source);
    fclose(dest);

    if (remove(args[1]) == 0) {
        printf("File moved to %s successfully.\n", dest_path);
    } else {
        printf("move: Failed to delete source file: %s\n", args[1]);
    }
    return -1;
}