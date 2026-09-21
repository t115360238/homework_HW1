#include <stdio.h>
#include <stdlib.h>

int main(){
    float weight, hight;

    printf("enter weight(kg)\n");
    scanf("%f", &weight);

    printf("enter hight(m)\n");
    scanf("%f", &hight);

    printf("BMI: %.1f\n", weight / (hight * hight));
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");
    return 0;
}