#include <stdio.h>
#include <stdlib.h>

struct Student{
    
    char name[50];
    char major[50];
    int age;
    int id;
    double gpa;

};



int main(){

    struct Student student1;
    student1.age = 19;
    student1.gpa = 8.95;
    student1.id = 1;
    strcpy(student1.name, "Thiago Assis Fernandes");
    strcpy(student1.major, "Ciência da Computação");

   
    printf("%.2f\n", student1.gpa);

    return 0;
}