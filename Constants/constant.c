#include <stdio.h>

int main(){

    int myInt = 2;
    printf("%d\n", myInt);
    myInt = 4;
    printf("%d\n", myInt);

    const int MY_INT = 22;
    printf("%d\n", myInt);
    MY_INT = 42;
    printf("%d\n", myInt);

    return 0;
}