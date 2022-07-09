#include <stdio.h>
#include <stdlib.h>

void greeting(char name[]){
    printf("Hello! %s \n", name);
}
int main(){

    greeting("Thiago");
    greeting("mari");
    greeting("lass");
    greeting("lad");

    return 0;
}

