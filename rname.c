#include "shell.h"

int rname(char **args) {
    if (args[1] == NULL || args[2] == NULL) {
        printf("move: Missing source or destination argument.\n");
        return -1;
    }

    FILE *source, *dest;
    char ch;

    source = fopen(args[1], "r");
    if (source == NULL) {
        printf("move: Cannot open source file: %s\n", args[1]);
        return -1;
    }

    dest = fopen(args[2], "w");
    if (dest == NULL) {
        printf("move: Cannot open destination file: %s\n", args[2]);
        fclose(source);
        return -1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    if (remove(args[1]) == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("move: Failed to delete source file: %s\n", args[1]);
    }
    return -1;
}