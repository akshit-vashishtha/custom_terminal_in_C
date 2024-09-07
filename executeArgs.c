#include "shell.h"

typedef int (*command_func)(char **args);

struct {
    char *name;
    command_func func;
} command_table[] = {
    {"pwd", (command_func)pwd},
    {"exit", (command_func)ex},  // No args needed for `exit`
    {"cd", cd},
    {"ls", (command_func)ls},  // No args needed for `ls`
    {"newdir", newdir},
    {"deldir", deldir},
    {"newfile", newfile},
    {"delfile", delfile},
    {"display", display},
    {"copy", copy},
    {"clearcontents", clearcontents},
    {"clear", (command_func)clear},  // No args needed for `clear`
    {"print", print},
    {"rename", rname},
    {"move", mv},
    {"history",history},
    {"getinfo",getinfo}
};

int executeArgs(char **args) {
    if (args[0] == NULL) return -1; 
    logArgsToFile(args);
    // Loop through the command table to find and execute the corresponding function
    int num_commands = sizeof(command_table) / sizeof(command_table[0]);
    for (int i = 0; i < num_commands; i++) {
        if (strcmp(args[0], command_table[i].name) == 0) {
            return command_table[i].func(args);  // Call the function if the command matches
        }
    }
    printf("No such command found\n");
    return -1; 
}

void logArgsToFile(char** args) {
    //'a' open file in append mode
    FILE *file = fopen("D:/custom_terminal_in_c/history.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    for (int i = 0; args[i] != NULL; i++) {
        fprintf(file, "%s ", args[i]);
    }
    fprintf(file,"\n");

    fclose(file);
}