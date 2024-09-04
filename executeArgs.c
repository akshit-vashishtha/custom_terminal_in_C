#include "shell.h"

int executeArgs(char **args) {
    if(args[0]==NULL) return -1; // empty command was passed

    if (strcmp(args[0], "pwd") == 0) {
        return pwd();  // Execute `pwd` command directly
    }
    if (strcmp(args[0], "exit") == 0) {
        printf("Exiting terminal\n");
        return 0;  // Execute `exit` command directly
    }
    if(strcmp(args[0], "cd")==0){
        return cd(args);
    }

    if(strcmp(args[0], "ls")==0){
        return ls();
    }

    if(strcmp(args[0], "newdir")==0){
        return newdir(args);
    }
    if(strcmp(args[0], "deldir")==0){
        return deldir(args);
    }
    if(strcmp(args[0],"newfile")==0){
        return newfile(args);
    }
    if(strcmp(args[0],"delfile")==0){
        return delfile(args);
    }
    if(strcmp(args[0],"display")==0){
        return display(args);
    }
    if(strcmp(args[0],"copy")==0){
        return display(args);
    }

    // For testing, just print the tokens
    for (int i = 0; args[i] != NULL; i++) {
        printf("arg[%d]: %s\n", i, args[i]);
    }
    printf("No such command found\n");
    return -1;  // Continue running
}