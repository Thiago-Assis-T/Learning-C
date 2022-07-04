#include <stdio.h>

int main(){
    double num1, num2;


    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter a second number: ");
    scanf("%lf", &num2);

    printf("Answer: %.2f", num1 + num2);


    return 0;
}