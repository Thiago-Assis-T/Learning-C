#include <stdio.h>
#include <stdlib.h>

int main(){

    greeting("Thiago");
    greeting("mari");
    greeting("lass");
    greeting("lad");

    return 0;
}

void greeting(char name[]){
    printf("Hello! %s \n", name);
}