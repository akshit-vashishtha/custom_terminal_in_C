#include "shell.h"
#define tokenDel " \t\r\n\a\""

char **splitLine(char* line){
    int buffSize=64;
    int i=0;
    char **tokens=malloc(buffSize * sizeof(char *));
    char *token;
    if(!tokens){
        fprintf(stderr, "allocation error in splitLine\n");
        exit(EXIT_FAILURE);
    }
    token=strtok(line, tokenDel);
    while(token !=NULL){
        tokens[i]=token;
        i++;
        if(i>=buffSize){
            buffSize*=2;
            tokens=realloc(tokens,buffSize*sizeof(char*));
            if(!tokens){
                fprintf(stderr, "allocation error in splitLine\n");
                exit(EXIT_FAILURE);
            }
        }
        token=strtok(NULL,tokenDel);
    }
    tokens[i]=NULL;
    return (tokens);
}