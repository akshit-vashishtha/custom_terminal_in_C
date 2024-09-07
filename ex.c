#include "shell.h"

int ex(){
    FILE *file = fopen("history.txt", "w");
    fclose(file);
    printf("EXITING TERMINAL\n");
    return 0;
}