#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 1;

    while (i <= 5){
        printf("%d \n", i);
        i++;
    }
    

    printf("----------------\n");

    for (i = 1; i <= 5; i++){
        printf("%d \n", i);
    }
    

    return 0;
}