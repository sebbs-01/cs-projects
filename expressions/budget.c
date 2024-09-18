#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation;
    printf("This is going to calculate your budget for the month.\n");
    printf("How much do you make this month?\n");
    scanf("%f", &income);
    printf("Your income is: $%.2f\n", income);
    return 0;
}