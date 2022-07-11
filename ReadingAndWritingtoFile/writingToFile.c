#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("names", "w");
    fprintf(fpointer, "James\nMarie\nJohn\nBelathor\n");
    fclose(fpointer);


    return 0;
}