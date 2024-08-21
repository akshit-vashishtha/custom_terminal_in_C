#include "shell.h"

char *readLine(void){
    char *line = NULL;
    size_t buffSize=0;

    if(getline(&line,&buffSize,stdin)==-1){
        if(feof(stdin)){
            free(line);
            exit(EXIT_SUCCESS);
        }
        else{
            free(line);
            perror("error while reading the line from stdin");
            exit(EXIT_FAILURE);
        }
    }
    return (line);
    
}