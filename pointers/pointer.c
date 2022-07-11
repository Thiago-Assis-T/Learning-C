#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 19;
    int *pAge = &age;


    printf("%p\n", pAge);

    printf("%p\n", &*&age);

    printf("%p\n", pAge);

    return 0;
}