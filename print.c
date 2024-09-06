#include "shell.h"

int print(char** args){
    int i = 1; // Start at index 1 to skip the "echo" command itself
    while (args[i] != NULL) {
        printf("%s", args[i]); // Print each argument
        if (args[i + 1] != NULL) {
            printf(" "); // Print a space between arguments
        }
        i++;
    }
    printf("\n"); // Print a newline at the end
    return -1;
}