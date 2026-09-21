#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[2];

    scanf("%d%d", &num[0], &num[1]);

    if((num[1] % num[0]) == 0)
        printf("%d is a multiple of %d", num[1], num[0]);
    else
        printf("%d is not a multiple of %d", num[1], num[0]);

    return 0;
}