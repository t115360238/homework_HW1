#include <stdio.h>
#include <stdlib.h>

int main(){
    int mileage, gas_money, km_driven, parking_fee, toll;

    printf("Enter total mileage\n");
    scanf("%d", &mileage);

    printf("How much does a liter or gallon of gasoline cost\n");
    scanf("%d", &gas_money);
    
    printf("How many kilometers can it travel per liter or gallon on average\n");
    scanf("%d", &km_driven);
    
    printf("Enter parking fee\n");
    scanf("%d", &parking_fee);
    
    printf("Enter toll\n");
    scanf("%d", &toll);

    printf("Total cost:%d", ((mileage / km_driven) * gas_money) + parking_fee + toll);

    return 0;
}