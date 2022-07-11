#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("names", "w");
    fprintf(fpointer, "Thiago\nMariana\nJoão Matheus\nBernardo\n");
    fclose(fpointer);


    return 0;
}