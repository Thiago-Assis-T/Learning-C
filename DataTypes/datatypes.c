#include <stdio.h>

int main(){
    
    int year = 2022;
    int birthYear = 2002;
    char name[] = "Thiago";
    float height = 1.63;
    char grade = 'A';
    int age = (birthYear - year);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c", grade);
    return 0;
}