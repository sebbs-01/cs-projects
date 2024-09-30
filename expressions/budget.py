income = float(input("What is your monthly income?: "))
rent = float(input("How much is your rent?: "))
utilities = float(input("How much do you spend on utilities?: "))
groceries = float(input("How much do you spend on groceries?: "))
transportation = float(input("How much do you spend on transportation?: "))
savings = float(input("How much is going in to savings this month?: "))


expenses = (rent+utilities+groceries+transportation)
savings = income*.2
total = (income-expenses-savings)

print("Your monthly income is $", income)
print("Your monthly savings are $", savings)
print("Your monthly expenses are $", expenses)
print("You have $", total, "left that you can spend.")

prent = (rent/income)*100
putilities = (utilities/income)*100
pgroceries = (groceries/income)*100
ptransportation = (transportation/income)*100
pexpenses = (expenses/income)*100
psavings = (savings/income)*100
print("Your rent is", prent, "% of your income")
print("Your utilities is", putilities, "% of your income")
print("Your groceries are", pgroceries, "% of your income")
print("Your transportations are", ptransportation, "% of your income")
print("Your savings are", psavings, "% of your income")
print("Your expenses are", pexpenses, "% of your income")

