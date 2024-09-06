#include "shell.h"

int history() {
    FILE *file = fopen("history.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1; 
    }
    char buffer[1024];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    return -1;
}