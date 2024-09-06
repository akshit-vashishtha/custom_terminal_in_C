#include "shell.h"

int ex(){
    FILE *file = fopen("history.txt", "w");
    close(file);
    printf("EXITING TERMINAL\n");
    return 0;
}