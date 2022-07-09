#include <stdio.h>
#include <stdlib.h>

int main(){

    int nums[] = {2, 4, 6, 8, 10, 12, 14};
    nums[1] = 44;
    printf("%d \n", nums[1]);
   
    int nums2[10];
    nums2[2] = 15;
    printf("%d \n", nums2[2]);

    char word[] = "Array";
    printf("%s \n", word);

   
    return 0;
}