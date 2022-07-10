#include <stdio.h>
#include <stdlib.h>

int main(){


    char grade = 'C';


    

    switch (grade){
    case 'A':
        printf("You did great!\n");
        break;
    case 'B':
        printf("You did alright!\n");
        break;
    case 'C':
        printf("You did poorly!\n");
        break;
    case 'D':
        printf("You did Very Bad!\n");
        break;
    case 'F':
        printf("You Failed!\n");
        break;

    default:
        printf("Invalid grade!\n");
        break;
    }


    return 0;
}