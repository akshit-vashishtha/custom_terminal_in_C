#include "shell.h"

typedef int (*command_func)(char **args);  // Define a function pointer type

struct {
    char *name;
    command_func func;
} command_table[] = {
    {"pwd", (command_func)pwd},
    {"exit", (command_func)exit},  // No args needed for `exit`
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
    {"move", mv}
};

int executeArgs(char **args) {
    if (args[0] == NULL) return -1; 

    // Loop through the command table to find and execute the corresponding function
    int num_commands = sizeof(command_table) / sizeof(command_table[0]);
    for (int i = 0; i < num_commands; i++) {
        if (strcmp(args[0], command_table[i].name) == 0) {
            return command_table[i].func(args);  // Call the function if the command matches
        }
    }

    // For testing, print the tokens if no command was found
    for (int i = 0; args[i] != NULL; i++) {
        printf("arg[%d]: %s\n", i, args[i]);
    }
    printf("No such command found\n");
    return -1;  // Continue running
}
