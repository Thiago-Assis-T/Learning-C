#include <stdio.h>
#include <stdlib.h>

double cubeNum(double num){
    double cubedNum = num * num * num;

    return cubedNum;
}

int main(){
    
    printf("Cubed Number: %.1f \n", cubeNum(3.3));    
    return 0;  
}