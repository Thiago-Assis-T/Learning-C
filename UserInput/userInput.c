#include <stdio.h>

int main(){

    int age;
    char name[20];

    printf("Enter your name: ");
    fgets(name, 20, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hey %s, you are %d years old!\n", name, age);
    return 0;
}