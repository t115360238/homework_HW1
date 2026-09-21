#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[3]; //num[0] => max ; num[2] => min

    scanf("%d%d%d", &num[0], &num[1], &num[2]);

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 3; j++){
            if(num[i] < num[j]){
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
            }
        }
    }

    printf("max:%d , min:%d", num[0], num[2]);

    return 0;
}