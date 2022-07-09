#include <stdio.h>
#include <stdlib.h>

int main(){

    char color[10];
    char noun[15];
    char person[20];

    printf("Insert a color: ");
    scanf("%s", color);

    printf("Insert a noun: ");
    scanf("%s", noun);
    
    printf("Insert a person: ");
    scanf("%s", person);
    printf("\n");

    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s\n", person);

    return 0;
}
