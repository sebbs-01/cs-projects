#include <stdio.h>
int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, total;
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses;


    printf("This is going to calculate your budget for the month.\n");
    printf("How much do you make each month?\n");
    scanf("%f", &income);

    printf("How much is your rent?\n");
    scanf("%f", &rent);

    printf("How much do you spend on utilities?\n");
    scanf("%f", &utilities);

    printf("How much do you spend on groceries?\n");
    scanf("%f", &groceries);

    printf("How much do you spend on transportation?\n");
    scanf("%f", &transportation);

    printf("How much is going in to savings this month?\n");
    scanf("%f", &savings);

    expenses = rent + utilities + groceries + transportation;
    savings = income * .2;
    total = income - expenses - savings;
    printf("Your monthly income is $%.2f\n", income);
    printf("Your monthly expenses are $%.2f\n", expenses);
    printf("Your monthly savings is $%.2f\n", savings);
    printf("You have $%.2f left that you can spend\n", total);
    prent = rent/income * 100
    
    return 0;
}