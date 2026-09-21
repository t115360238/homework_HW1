#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("    *    \n");
    printf("   ***   \n");
    printf("  *****  \n");
    printf(" ******* \n");
    printf("*********\n\n");

    for(int i = 1, j = 4; i <= 9; i += 2, j--){
        for(int k = 0; k < j; k++)
            printf(" ");

        for(int l = 0; l < i; l++)
            printf("*");
    
        printf("\n");
    }
    return 0;
}