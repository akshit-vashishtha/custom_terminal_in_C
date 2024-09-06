#include "shell.h"

void shell_interactive(void){
    char *line;
    char **args;
    int status=-1;
    do{
        char wd[100];
        getcwd(wd,sizeof(wd));
        printf("%s$ ",wd);
        line = readLine();
        args = splitLine(line);
        status = executeArgs(args);

        free(line);
        free(args);

        if(status>=0) exit(status);
    } while(status==-1);
}