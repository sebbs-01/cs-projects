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
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    pexpenses = expenses/income *100;
    psavings = savings/income *100;
    printf("Your rent is %1.f%% of your income\n", prent);
    printf("Your utilities is %1.f%% of your income\n", putilities);
    printf("Your groceries are %1.f%% of your income\n", pgroceries);
    printf("Your transportations are %1.f%% of your income\n", ptransportation);
    printf("Your savings are %1.f%% of your income\n", psavings);
    printf("Your expenses are %1.f%% of your income\n", pexpenses);
    
    return 0;
}