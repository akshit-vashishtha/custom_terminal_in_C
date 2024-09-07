#include "shell.h"

int getinfo(char **args) {
    // If no command is provided, show the general help message
    if (args[1] == NULL) {
        printf("1) pwd: Prints the current working directory.\n");
        printf("2) cd: Changes the current directory.\n");
        printf("3) exit: Exits the terminal.\n");
        printf("4) ls: Lists files and directories in the current directory separately.\n");
        printf("5) newdir: Creates a new directory.\n");
        printf("6) deldir: Deletes an existing directory.\n");
        printf("7) newfile: Creates a new file.\n");
        printf("8) delfile: Deletes a specified file.\n");
        printf("9) display: Displays the content of a file.\n");
        printf("10) copy: Copies contents of one file into another.\n");
        printf("11) clearcontents: Clears the contents of a file.\n");
        printf("12) print: Prints a custom message in terminal.\n");
        printf("13) rename: Renames a file or directory.\n");
        printf("14) move: Moves a file from one directory to another.\n");
        printf("15) history: To know all the commands implemented in that session.\n");
        printf("16) getinfo: Provides information about a command.\n");
        printf("\nTo get more specific information about a command, use getinfo <command_name>\n");
        return -1;
    }

    // checl for specific command
    if (strcmp(args[1], "pwd") == 0) {
        printf("pwd: Prints the current working directory.\nUsage: pwd\n");
    } else if (strcmp(args[1], "cd") == 0) {
        printf("cd: Changes the current directory.\nUsage: cd <directory_name>\ncd .. to back to parent directory\ncd <directory_path>");
    } else if (strcmp(args[1], "exit") == 0) {
        printf("exit: Exits the terminal.\nUsage: exit\n");
    } else if (strcmp(args[1], "ls") == 0) {
        printf("ls: Lists files and directories in the current directory separately.\nUsage: ls\n");
    } else if (strcmp(args[1], "newdir") == 0) {
        printf("newdir: Creates a new directory.\nUsage: newdir <directory_name>\n");
    } else if (strcmp(args[1], "deldir") == 0) {
        printf("deldir: Deletes an existing directory.\nUsage: deldir <directory_name>\n");
    } else if (strcmp(args[1], "newfile") == 0) {
        printf("newfile: Creates a new file.\nUsage: newfile <file_name>\n");
    } else if (strcmp(args[1], "delfile") == 0) {
        printf("delfile: Deletes a specified file.\nUsage: delfile <file_name>\n");
    } else if (strcmp(args[1], "display") == 0) {
        printf("display: Displays the content of a file.\nUsage: display <file_name>\n");
    } else if (strcmp(args[1], "copy") == 0) {
        printf("copy: Copies contents of one file into another.\nUsage: copy <source_file> <destination_file>\n");
    } else if (strcmp(args[1], "clearcontents") == 0) {
        printf("clearcontents: Clears the contents of a file.\nUsage: clearcontents <file_name>\n");
    } else if (strcmp(args[1], "print") == 0) {
        printf("print: Prints a custom message in terminal.\nUsage: print <message>\n");
    } else if (strcmp(args[1], "rename") == 0) {
        printf("rename: Renames a file or directory.\nUsage: rename <old_name> <new_name>\n");
    } else if (strcmp(args[1], "move") == 0) {
        printf("move: Moves a file from one directory to another.\nUsage: move <file_name> <destination_directory>\n");
    } else if (strcmp(args[1], "history") == 0) {
        printf("history: Shows all commands executed in the current session.\nUsage: history\n");
    } else if(strcmp(args[1], "getinfo")==0){
        printf("getinfo: To get information about a specific command or all commands in general.\nUsage: getinfo\ngetinfo <command_name>\n");
    } else {
        printf("Unknown command: %s\n", args[1]);
        printf("Use getinfo to see the list of available commands.\n");
    }
    printf("\n");
    return -1;
}
